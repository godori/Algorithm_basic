# encoding = utf-8
# 각 자리 숫자 합 프로그램

def sum_digits(num)
  sum = 0
  num_arr = num.to_s.split('') #split('')는 문자열만 가능
  num_arr.each do |x|
    sum = sum + x.to_i
  end
  return sum
end

while true
  print "Enter any natural number:"
  num = gets.chomp.to_i
  puts sum_digits(num)
end
