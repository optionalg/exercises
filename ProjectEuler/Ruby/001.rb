#!/usr/bin/env ruby

puts ((1..999).select { |i| (i % 3 == 0) or (i % 5 == 0) }).inject(:+)
