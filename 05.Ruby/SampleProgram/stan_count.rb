# encoding=utf-8

while true
  file = File.open("stan_lyrics.txt","r")
  count = 0
  print "Input a word you want to count:"
  target = gets.chomp.to_s

  file.each do |line|
    # 한 line을 ' '로 잘라서 word 배열로 저장
    word_line = line.split(' ')

    word_line.each do |word|
      #단어 처리 - 쉼표 제거 방법들
      # word = word.delete ","
      # word = word.gsub(',','')
      # word = word.delete(',')
      word = word.split(',').join
      #단어 처리 - 소문자화
      word = word.downcase

      # 단어가 타겟과 맞는지 검사하고 카운트 증가
      if word == target
        # print word_line
        count +=1
      end
    end
  end

  file.close
  puts "#{target} : #{count}"
end
