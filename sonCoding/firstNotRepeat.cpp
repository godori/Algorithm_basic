// 문자열에서 처음으로 반복되지 않는 문자를 효율적으로 찾아내는 함수를 작성하세요.
// ex) teeter에서 처음으로 등장하는 반복되지 않는 문자는 'r'이다.

// Using char array Version

#include <iostream>
#include <map>
using namespace std;

char notRepeat(char * str){
  int i = 0;
  char c;
  map<char,int> table;
  map<char,int>::iterator it;

  while(str[i] != '\0'){
    c = str[i];
    table[c]++;
    i++;
  }

  for(it = table.begin(); it != table.end(); it++){
    if(it->second == 1){
      c = it->first;
      break;
    }
  }
  return c;
}

int main(int argc, char const *argv[]) {

  char str[] = "twittwitter";

  cout << "처음으로 반복되지 않는 문자는 : ";
  cout << notRepeat(str) << endl;

  return 0;
}
