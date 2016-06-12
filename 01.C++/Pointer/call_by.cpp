#include <iostream>
using namespace std;

void call_by_val(int val){
  val = 20;
}
void call_by_ref(int *ref){
  *ref = 20;
}

 int main(int argc, char const *argv[]) {
   int value = 10;
   int refer = 10;

   cout << "before : " << value << "," << refer << endl;
   call_by_val(value);
  //  cout << "&refer : " << &refer << endl;
  //  cout << "*(&refer) : " << *(&refer) << endl;
   call_by_ref(&refer);
  //  cout << "&refer : " << &refer << endl;
  //  cout << "*(&refer) : " << *(&refer) << endl;
   cout << "after : " << value << "," << refer << endl;

  return 0;
}
