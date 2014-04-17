#!/usr/bin/env io

# spiral := Range setRange(1, 1002001) asList
spiralDiagonals := list()
i  := 1
ii := 2
calculateSpiralDiagonals := method(while(i < 101, 4 repeat(spiralDiagonals append(i + ii)); i = i + ii; ii = ii + 1))
calculateSpiralDiagonals
spiralDiagonals sum println
