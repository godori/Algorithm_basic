# 해쉬 생성 방법
# {}로 감싸고 , 로 성분을 구분한다
# 각 성분은   :키 => 값   형태로 입력한다
# : 이것은 심볼이라고 부른다.
resume = {:name => "Steve", :isMale => true, :age => 30}
puts "Avengers resume"
puts resume

# 빈 해쉬 만들고 성분 추가하기
avengers = Hash.new
avengers[:name] = "Tony Stark"
avengers[:isMale] = true
avengers[:age] = 45
puts "Tony Stark's information"
puts avengers

# 해쉬 성분 불러오기
puts "Who is the Iron-man?"
puts "Name : #{avengers[:name]}"
puts "Male : #{avengers[:isMale]}"
puts "Age : #{avengers[:age]}"

# 배열 안의 성분으로 해쉬가 들어가 있는 경우
avengers_list =[
  {:name => "Tony Stark", :codename => "Iron-man"},
  {:name => "Steve Rogers", :codename =>"Captain America"},
  {:name => "Natasha Romanoff",:codename => "Black Widow"},
  {:name => "Torr",:codename =>"Torr"}
]
puts "Avengers List"
avengers_list.each do |avengers|
  puts "Name : #{avengers[:name]}"
  puts "CodeName : #{avengers[:codename]}"
  puts "-----------"
end
