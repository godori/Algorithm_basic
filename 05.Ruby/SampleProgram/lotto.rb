# encoding= utf-8
# 로또 추첨 프로그램

def draw(num)
  draw_array = Array.new
  while draw_array.size <num
    # 1~45 사이 숫자 중 6개를 추출해 정렬한뒤 배열에 추가
    draw_array << (1..45).to_a.sample(6).sort
  end
  # 중복 배열을 제거한다 ex.[1,2,3] = [3,2,1] -> 한개 제거
  draw_array.uniq!

  return draw_array
end

# 1등 당첨의 경우를 추가해 보았다
def lot(win_array,num)
  draw_result = draw(num)
  draw_result.each do |array|
    if array == win_array.sort
      puts "1st prize!!"
      # (arr1 & arr2)는 두 어레이가 공통으로 가지는 부분만 추출
    elsif (win_array & array).size == 5
      puts "2nd Prize!"
    elsif (win_array & array).size == 4
      puts "3rd Prize.."
    end
  end
end

lot([1,2,3,4,5,6],100)
