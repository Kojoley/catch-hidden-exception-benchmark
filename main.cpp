#include "foo.hpp"

#include <benchmark/benchmark.h>

#define MAKE_BENCH(name, throw_name, catch_name)  \
static void name(benchmark::State& state) {       \
  for (auto _ : state)                            \
    try { throw_##throw_name(); }                 \
    catch (catch_name const&) { }                 \
}                                                 \
BENCHMARK(name)

MAKE_BENCH(hidden,       hidden_error,  hidden_error);
MAKE_BENCH(visible,      visible_error, visible_error);
MAKE_BENCH(hidden_base,  hidden_error,  std::runtime_error);
MAKE_BENCH(visible_base, visible_error, std::runtime_error);

BENCHMARK_MAIN();
