#include <iostream>
using namespace std;
int main(){

  int *pi;         // 1. pointer to dynamic memory
  pi = new int;    // 2. allocates Mem

  // 3. using dynamic memory
  *pi = 100;
  cout<<"addr : "<<pi<<endl;    // address changes every compiles
  cout<<"value : "<<*pi<<endl;

  *pi += 400;
  cout<<"value + 400  : "<<*pi<<endl;

  delete pi;      // 4.frees Mem (if not, memory leaks)

  return 0;
}
