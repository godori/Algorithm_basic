#include <iostream>
#include <fstream>

using namespace std;
int main(){
  ifstream is;
  is.open("_input.txt");

  int num = 0;
  char name[30] = "jojo";

  is>>number>>name;

  ofstream os;
  os.open("_output.txt");
  os<<number<<" "<<name<<endl;

  is.close();
  os.close();

  return 0;
}
