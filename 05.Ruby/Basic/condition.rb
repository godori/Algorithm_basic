# if
puts "Eat it or not?"
rabbit_alive = false
if rabbit_alive == false
  puts "->You can eat it."
end

# else
puts "chase it or not"
rabbit_speed = 10
if rabbit_speed < 7
  puts "->Chase it"
else
  puts "->Do not chase it."
end

# else if
puts "rock, sissors, paper :"
opponent_hand = "paper"
if opponent_hand == "rock"
  puts "->throw paper."
elsif opponent_hand == "scissors"
  puts "->throw rock."
else
  puts "->throw scissors"
end
