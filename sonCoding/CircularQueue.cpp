#include <iostream>
#define SIZE 5
using namespace std;

int queue[SIZE];
int front=0, rear=0;

int enQueue(int data){

  // 큐가 꽉 찼으면
  if((rear+1)%SIZE == front){
    cout << "Overflow!" << endl;
    return -1;
  }
  // 아니면 추가하고
  queue[rear] = data;
  rear = ++rear % SIZE;

  return data;
}

int deQueue(){
  if(front == rear){
    cout << "Underflow!" << endl;
    return -1;
  }
  int data = queue[front];
  front = ++front%SIZE;

  return data;
}

int main(int argc, char const *argv[]) {

  

  return 0;
}
