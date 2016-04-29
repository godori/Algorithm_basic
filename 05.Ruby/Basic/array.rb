# 기본 배열
lion_name =["jojo","nana","hihi"]
puts "name of lions"
puts lion_name

lion_weight = [10,20,40,70]
puts "weight of lions"
puts lion_weight

# 복합 배열
random = [50,"grr",2020, true, "HOi!",'temm']
puts random           # 한줄씩 출력
puts random.inspect   # 보기 편한 형태로 출력

# 배열에 값 추가하기
name = Array.new
puts name.inspect
name << "jotaro"
puts name.inspect
name << "joseph"
puts name.inspect
name << "jorno"
puts name.inspect

# 배열 성분 불러오기
jojofam = ["jonadan","joseph","jotaro","jolyne"]
weight = [90,85,80,60]
puts jojofam[0]
puts weight[3]

# 루비에서는 음의 정수로 불러올 수 있다
puts jojofam[-1]
puts weight[-3]
