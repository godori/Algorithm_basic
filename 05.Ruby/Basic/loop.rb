# 0에서 9까지 i가 증가하는 반복문
0.upto(9) do |i|
  puts i
end

#9에서 2까지 i가 감소하는 반복문
9.downto(2) do |i|
  puts i
end

# 변수 없이 단순히 반복할때는 |i| 생략가능
0.upto(9) do
  puts "grr"
end

# while문
puts "Counting the number of games the lion hunted :"
x = 0
while x <10
  x = x+2
  puts x
end
puts  "I hunted #{x} games."
