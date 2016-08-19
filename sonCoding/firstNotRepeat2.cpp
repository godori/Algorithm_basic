// 문자열에서 처음으로 반복되지 않는 문자를 효율적으로 찾아내는 함수를 작성하세요.
// ex) teeter에서 처음으로 등장하는 반복되지 않는 문자는 'r'이다.

// Using <string> Version

#include <iostream>
#include <string>
#include <map>
using namespace std;

string firstNotRepeat(string str){
  int i;
  string s = "";
  map<string,int> table;
  map<string,int>::iterator it;

  for(i=0; i<str.length(); i++){
    s = str.at(i);
    table[s]++;
  }

  for(it = table.begin(); it != table.end(); it++){
    // cout<< it->first <<":"<< it->second <<endl;
    if(it->second == 1){
      s = it->first;
      break;
    }
  }

  return s;
}

int main(int argc, char const *argv[]) {

  string str = "twittwitter";

  cout << "처음으로 반복되지 않는 문자는 : ";
  cout << firstNotRepeat(str) << endl;

  return 0;
}
