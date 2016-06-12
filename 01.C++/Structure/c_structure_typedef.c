#include <stdio.h>

// 이 예제에서 알 수 있는 것...!
// - 구조체도 배열로 선언할 수 있다!
// typedef 키워드? 기존 데이터 타입에 새 이름 부여
// - typedef [데이터타입] [이름]
// tptedef 사용시 구조체를 이름만으로 선언할 수 있음
//     (struct 생략 가능)
// - typedef 미사용 : struct student s;
// - typedef 사용  : student s;

// 구조체에 typedef 사용
typedef struct student{
  char name[50];
  unsigned int mark;
} student;

// 변수에 typedef 사용
typedef int INT_VAR;

void print_list(student list[], int size);
void read_list(student list[], int size);

int main(){

  // typedef로 변수 선언하기
  INT_VAR a = 10;
  printf("number: %d \n",a);

  // 구조체 리스트로 생성하기
  const int size = 2;
  student list[size];

  read_list(list,size);
  print_list(list,size);

  return 0;
}
void read_list(student list[], int size){
  printf("학생 정보를 입력해주세요:\n");
  for(int i=0; i<size; i++){
    printf("이름:");
    scanf("%s",&list[i].name);

    printf("마크:");
    scanf("%u",&list[i].mark);
  }
}

void print_list(student list[], int size){
  printf("\n학생들의 정보:");
  for(int i=0; i<size; i++){
    printf("\n 이름:%s, 마크:%u",list[i].name,list[i].mark);
  }
}
