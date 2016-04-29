# 배열의 인덱스와 문자열의 인댁스
Avengers = ["Torr","Ironman","Captin America","Hulk"]
Captain = "Steve"
puts Avengers[2]
puts Captain[2]

#문자열 내의 문자 하나하나를 성분으로 하는 배열
Captain_arr = Captain.split('')
puts Captain_arr.inspect

#다시 문자열 하나로 합칠 수 있다.
Captain_name = Captain_arr.join
puts Captain_name

# 다시 하나가 된 어벤져스
Avengers_name = Avengers.join("+")
puts Avengers_name

#계명성
Captain_name2 = Captain_arr.join("-")
puts Captain_name2
