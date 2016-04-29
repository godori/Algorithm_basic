input_id = input("아이디를 입력하세요:\n")
input_pwd = input("비밀번호를 입력하세요:\n")
real_id = "godori"
real_pwd = "11"

if real_id == input_id:
    if real_pwd == input_pwd:
        print("Hello!")
    else:
        print("pwd is wrong!")
else:
    print("wrong id or no id")
