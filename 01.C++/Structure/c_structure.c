#include <stdio.h>

struct student{
  int id;
  char *name;
  float score;
};

int main(){

  // struct 1
  struct student s;
  s.id = 1;
  s.name = "godori";
  s.score = 90.0;

  //struct 2
  struct student s2 ={2,"oksori",85.0};

  // print
  printf("id:%d \n",s.id);
  printf("name:%s \n",s.name);
  printf("score:%f \n",s.score);

  printf("id:%d \n",s2.id);
  printf("name:%s \n",s2.name);
  printf("score:%f \n",s2.score);

  return 0;
}
