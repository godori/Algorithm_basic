puts("아이디를 입력해주세요:\n")
in_str = gets.chomp()

real_godori = "godori"
real_k8805 = "k8805"

if real_godori == in_str or real_k8805 == in_str
    puts("Hello,"+in_str+"\n")
else
    puts("who are you?")
end
