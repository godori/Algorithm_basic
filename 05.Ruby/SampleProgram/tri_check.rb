# encoding=utf-8
# 삼각형 체크 프로그램

def tri_check(a,b,c)
  sides = [a,b,c].sort
  return sides[0] + sides [1] > sides[2]
end

while true
  print "inputs the first length:"
  input1 = gets.chomp.to_i
  print "inputs the first length:"
  input2 = gets.chomp.to_i
  print "inputs the first length:"
  input3 = gets.chomp.to_i

  if tri_check(input1,input2,input3)
    puts " they can be a triangle"
  else
    puts "They cannot be a triangle"
  end
end
