# size : 배열의 크기 출력
jojo = ["jonadan","joseph","jotaro","jolyne"]
puts jojo.size

# sort : 숫자 - 오름차순으로, 문자 - 알파벳 순서대로 출력
Avengers = ["Torr","Ironman","C.A","B.W","Falcon"]
puts Avengers.sort

# sort + reverse : 데이터 내림차순으로 정렬
puts Avengers.sort.reverse

# uniq : 배열 내 중복되는 데이터 제거하여 재구성
num = [3,2,2,4,7,2]
print num
puts
print num.uniq
puts

# each : 각 데이터 성분에 대하여 동일한 작업을 반복 수행할 때
things = ["rabbit","fox","gazel","tiger"]
things.each do |thing|
  puts "The " + thing + " lives in Zootopia"
end

Avengers.each do |hero|
  puts hero + " has a super power"
end
