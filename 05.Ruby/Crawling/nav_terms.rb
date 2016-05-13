# 1348049.downto(1348040) do |x|
#   `wget -O #{x}.html http://terms.naver.com/entry.nhn?docId=#{x}&cid=40942&categoryId=32848`
# end

1.upto(20) do |x|
  `wget -O "moon#{x}".html http://comic.naver.com/webtoon/detail.nhn?titleId=551649&no=#{x}&weekday=fri`
end
