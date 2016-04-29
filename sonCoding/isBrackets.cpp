// input sample :
//  (({{[]}}))
//  (({{[]}}))({)})
// expected output:
// YES
// NO

#include <iostream>
#include <fstream>
#include <stack>
#include <string>

using namespace std;

bool isBrackets(string str){

  string open = "({[";
  string close = ")}]";
  stack<int> s;
  int i,j;
  int n = open.length(); // n은 괄호 종류의 갯수

  for( i=0; i< str.length(); i++){
    for( j=0; j<n; j++){
        // 여는 괄호이면
        if(open.at(j) == str.at(i)){
          s.push(j);
        }
        // 닫는 괄호이면
        else if(close.at(j) == str.at(i)){
          if(s.empty())
            return false; // 스택이 비었음->실패
          else if( s.top() == j)
              s.pop();  // 매치됨->계속진행
          else
            return false; // 매치안됨->실패
        }
    }
  }
  return true; // Correct!
}

int main(){

  // File open
  ifstream is;
  is.open("_input.txt");

  // Read string
  string str = "";
  is>>str;

  // Print Brackets Complete Check
  cout<<"input:"<<str<<endl;
  if(isBrackets(str))
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;

  // File close
  is.close();

return 0;
}
