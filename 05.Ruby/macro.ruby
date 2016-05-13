#encoding=utf-8

file = File.open("sample.txt","r")
file_w = File.open("result.txt","w")

file.each do |line|
  arr = line.partition(".")
  if arr[0] != "\n"
    file_w.puts(arr[2])
  end
end

file.close
file_w.close
