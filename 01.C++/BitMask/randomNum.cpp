#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main(){
  srand((unsigned)time(NULL));

  int temp;

  //99999
  for(int i=0; i<100 ; i++){
    temp = rand()%100000;
    cout << setfill('0') << setw(5) << temp << endl;
  }

  return 0;
}
