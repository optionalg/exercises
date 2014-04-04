#!/usr/bin/env ruby

spiral           = Range.new(2, (1001 ** 2))
diagonal_numbers = [1]
slice_count      = 2
 while slice_count <= 1000
  spiral.to_a[((((slice_count-2)+1)**2)-1..((slice_count+1)**2)-1)].each_slice(slice_count) do |until_diag_num|
      diagonal_numbers.push(until_diag_num.last) unless until_diag_num.last > (slice_count + 1)**2
  end
  slice_count = slice_count + 2
end
puts diagonal_numbers.inject(:+)
