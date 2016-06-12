#include <iostream>
using namespace std;

// 전역 변수
int gl_val = 30;

void call_by_val(int *val){
  val = &gl_val;
  cout << "val : " << val << endl;
  cout << "&gl_val : " << &gl_val << endl;
}
void call_by_ref(int **ref){
  *ref = &gl_val;
  cout << "ref: " << *ref << endl;
  cout << "&gl_val : " << &gl_val << endl;
}

 int main(int argc, char const *argv[]) {
   int local_val = 10;
   int *value = &local_val;
   int *refer = &local_val;

   cout << "before : " << *value << "," << *refer << endl;
   cout << "value : " << value << endl;
   call_by_val(value);
   call_by_ref(&refer);
   cout << "after : " << *value << "," << *refer << endl;

  return 0;
}
