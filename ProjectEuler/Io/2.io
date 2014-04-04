#!/usr/bin/env io

fib := method(nth, nth = nth - 1; numbers := list(1, 1); if(nth < 0, 0, while(numbers size <= nth, numbers append(list(numbers last, numbers at(-2)) sum)); numbers last))
i := 2
fibList := list(0)
fibListEven := list(0)
while(fibList last < 4000000, fibList append(fib(i)); i = i + 1)
fibList foreach(n, if(n % 2 == 0, fibListEven append(n)))
fibListEven sum println
