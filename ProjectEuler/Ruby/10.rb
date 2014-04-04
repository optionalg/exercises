#!/usr/bin/env ruby

require 'mathn'
primes = [0]
i = 1
while primes.last < 2000000
	primes.push(Prime.take(i).last)
	i = i + 1
end
puts primes.inject(:+)
