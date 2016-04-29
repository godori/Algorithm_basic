# 한글을 입력하고 싶다면 첫 행에 아래를 명시해주자
# 주석으로 처리되어 있어도 기능한다! (magic comment)
# encoding=utf-8

while true
  print "input the current temperature in F:"
  temp_f = gets.chomp.to_i
  temp_c = (temp_f - 32) * 5.to_f / 9.to_f

  puts "The current temperature in celsius is: #{temp_c}"
end
