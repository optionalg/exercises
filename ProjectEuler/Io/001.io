#!/usr/bin/env io

Range setRange(1, 999) asList select(i, (i % 3 == 0) or (i % 5 == 0)) reduce(+) println
