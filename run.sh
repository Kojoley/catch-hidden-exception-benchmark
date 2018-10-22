#!/bin/sh

$CXX -fPIC -o libfoo.so -shared foo.cpp -fvisibility=hidden -Wall -Wextra -pedantic && \
  $CXX -o main main.cpp ./libfoo.so -fvisibility=hidden -Wall -Wextra -pedantic -lbenchmark -lpthread && \
  ./main
