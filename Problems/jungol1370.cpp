#include <iostream>
#include <fstream>

using namespace std;
int main (){

  ifstream file;
  file.open("input.txt");


  int num;

  if(!file.is_open()){
    cout<<"Error";
  }
  else{
    cout<<"file open"<<endl;
    file>>num;
  }



  return 0;
}
