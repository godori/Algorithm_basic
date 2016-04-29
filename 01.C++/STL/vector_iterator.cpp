#include <iostream>
#include <vector>
#define size 10

using namespace std;
int main(){

  vector<int> scores;
  int num[size] = {35,9,8,18,98,31,58,17,76,45};
  int value = 0;

  // Input the numbers to scores
  for(int i=0;i<size; i++)
    scores.push_back(num[i]);

  // Find maximum score
  int max = -100;
  vector<int>::iterator it;

  for(it = scores.begin(); it < scores.end(); it++){
    if(*it > max)
      max = *it;
  }

  cout<<"1st scores : "<<max<<endl;

  return 0;
}
