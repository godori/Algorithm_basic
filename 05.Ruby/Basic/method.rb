def sum(a,b)
  sum = 0
  a.upto(b) do |x|
    sum = sum + x
  end
  puts sum
end

def add(a,b)
  return a+b
end

sum(1,10)
puts add(2,4)
