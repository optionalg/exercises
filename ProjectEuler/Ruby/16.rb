#!/usr/bin/env ruby

digits = []; (2 ** 1000).to_s.split("").each {|d| digits.push(d.to_i)}; puts digits.inject(:+)
