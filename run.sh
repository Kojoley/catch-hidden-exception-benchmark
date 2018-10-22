#!/bin/sh

$CXX -fPIC -o libfoo.so -shared foo.cpp -std=c++0x -fvisibility=hidden -Wall -Wextra -pedantic && \
  $CXX -o main main.cpp ./libfoo.so -std=c++0x -fvisibility=hidden -Wall -Wextra -pedantic -lbenchmark -lpthread && \
  ./main
