#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {

  char example[] = "Overwatch is a multi-player FPS game.";
  int cnt=0,i;

  // Check Length
  while(true){
    if(example[cnt] == '\0')
      break;
    cnt++;
  }
  cout << "length = " << cnt << endl;

  // Reverse String
  int s=0,e=cnt;
  char temp;

  while(s<e){
    // SWAP start <-> end
    temp = example[s];
    example[s] = example[e];
    example[e] = temp;
    // cout << "s="<< s <<", e="<< e <<endl;
    s++,e--;
  }

  // Print
  for(i=0;i<cnt+1;i++)
    cout << example[i];
  cout << endl;

  return 0;
}
