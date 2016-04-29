# 2차원 배열의 평균을 구하는 프로그램

def array_mean(arr)
  sum = 0
  arr.each do |x|
    sum += x
  end

  arr_mean = sum.to_f / arr.size
  return arr_mean

end

def array_sort(arrays)
  # {|arr1,arr2| arr1[#] <=> arr2[#]} 의미는
  # 명시해 준 성분 번호(#)에 따라 이를 기준으로 배열의 성분들이 오름차순 정렬
  # 즉, sort! 메서드 사용시
  # arr1과 arr2 는 배열 내의 서로 다른 두 성분이며
  # (arr1의 비교기준) <=> (arr2의 비교기준)로 비교한다!
  arrays.sort! {|arr1,arr2| array_mean(arr1) <=> array_mean(arr2)}
  arrays.each do |array|
    puts array.inspect
  end
end

twodim_array = [
  [1,2,3,4,5,6,7],
  [2,1,5,6,3,7,8,4,2],
  [2,1,4,2,5,6,3,2],
  [1,2,6,2,1,6,3,3],
  [1,5,2,2,7,2,5,0,1,2,4,8,8]
]

array_sort(twodim_array)
