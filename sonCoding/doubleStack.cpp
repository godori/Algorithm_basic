#include <iostream>

using namespace std;
#define SIZE 10
int arr[SIZE] = {0};
int idx1, idx2;

class stack{
public:

  stack(int num){
    if(num == 1)
      idx1 = -1;
    else if(num == 2)
      idx2 = SIZE;
  }
  void push(int num, int data){
    if (num == 1){
      arr[++idx1] = data;
      cout << "idx1:" << idx1 <<", val=" << arr[idx1] << endl;
      // idx1++;
    } else if (num == 2 ){
      arr[--idx2] = data;
      cout << "idx2:" << idx2 <<", val=" << arr[idx2] << endl;
      // idx2--;
    }
  }
  int pop(int num){
    int data;
    if (num == 1){
      data = arr[--idx1];
      // idx1--;
    } else if (num == 2 ){
      data = arr[++idx2];
      // idx2++;
    }
    return data;
  }
};

int main(int argc, char const *argv[]) {
  stack s1(1);
  stack s2(2);

  s1.push(1,10);
  s1.push(1,20);
  s2.push(2,90);
  s2.push(2,80);

  cout << "idx1 = " << idx1 << ", idx2 = " << idx2 << endl;

  cout << "s1 : " << s1.pop(1) << endl;
  cout << "s2 : " << s2.pop(2) << endl;

  cout << "idx1 = " << idx1 << ", idx2 = " << idx2 << endl;

  return 0;
}
