# 외부 파일 열기 & 닫기
file = File.open("jungle.txt","r")
puts file.gets
file.close

# 외부 파일에 내용 쓰기
file = File.open("jojo.txt","w")
file.puts("jojo's bizarre Adventere is very interesting!")
file.close

# 읽고 쓰기 응용
file_w = File.open("snake.txt","w")
0.upto(9) do
  file_w.puts("~" * 10)
end
file_w.close

file_r = File.open("snake.txt","r")
file_r.each do |line|
  puts line
end
file_r.close
