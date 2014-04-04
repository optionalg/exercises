#!/usr/bin/env io

naturalNumbers := Range setRange(1, 100) asList
squareOfSum := (naturalNumbers sum) ** 2
sumOfSquares := list(0)
naturalNumbers foreach(n, sumOfSquares append(n ** 2))
sumOfSquares = sumOfSquares sum
diff := squareOfSum - sumOfSquares
diff println
