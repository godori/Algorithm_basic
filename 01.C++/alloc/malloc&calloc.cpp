#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

  char *cp;
  cp = (char*)malloc(sizeof(char)*10);

  int *ip;
  ip = (int*)malloc(sizeof(int)*1);

  cout << "Type your name : ";
  cin >> cp;
  cout << "Your name [" << cp << "]" << endl;
  cout << endl;
  cout << "&cp : " << &cp << endl;
  cout << "*cp : " << *cp << endl;
  cout << "*(cp+2) : " << *(cp+2) << endl;
  cout << "cp : " << cp << endl;
  cout << endl;

  cout << "Type your age, height : ";
  cin >> *ip >> *(ip+1) >> *(ip+10);
  cout << "&ip : " << &ip << endl;
  cout << "ip : " << ip << endl;
  cout << "*ip : " << *ip << endl;
  cout << "*(ip+1) : " << *(ip+1) << endl;
  cout << "*(ip+10) : " << *(ip+10) << endl;

  free(cp);
  return 0;
}
