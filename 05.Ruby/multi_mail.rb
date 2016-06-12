#encoding=utf-8

require 'gmail'

def send_mail(address)
  gmail = Gmail.connect("gej.okpo@gmail.com","")
  puts gmail.logged_in?
  gmail.deliver do
    to address
    subject "[AutoMail]GODORI Mail Test"
    text_part do
      body "Hello, world! Thanks Wonshine.. I cannot use Korean. sob sob"
    end
  end

  gmail.logout
end

address_list = ["gej.okpo@gmail.com","gej221@naver.com", "bird_soul@naver.com"]
address_list.each do |addr|
  send_mail(addr)
end
