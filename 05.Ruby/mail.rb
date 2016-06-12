# gem 이름을 명시해준다
require 'gmail'

gmail = Gmail.connect("gej.okpo@gmail.com","")
puts gmail.logged_in?
gmail.deliver do
  to "gej.okpo@gmail.com"
  subject "ruby mail"
  text_part do
    body "contents"
  end
end

gmail.logout
