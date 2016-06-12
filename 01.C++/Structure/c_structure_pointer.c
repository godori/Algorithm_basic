#include <stdio.h>

int main(){

  struct st{
    int id;
    char *name;
    char *address;
  };

  struct st employee; // 일반적인 구조체 생성
  struct st *strptr;  // 구조체 포인터 선언

  strptr = &employee; //구조체 포인터 초기화

  strptr->id = 0;
  strptr->name = "godori";
  strptr->address = "Seoul";

  printf("직원 정보: id=%d \n",strptr->id);
  printf("name: %s \n",strptr->name);
  printf("addr: %s \n",strptr->address);

  return 0;
}
