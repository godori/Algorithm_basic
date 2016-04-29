jojo = [
  ["Jotaro",3],
  ["Joseph",2],
  ["Jorno",5],
  ["Jonadan",1],
  ["Josuke",4]
]

jojo.each do |array|
  puts array.inspect
end

jojo.sort! {|arr1,arr2| arr1[1] <=> arr2[1]}
puts " - - - After Sort by Generation Order - - - -"
jojo.each do |array|
  puts array.inspect
end
