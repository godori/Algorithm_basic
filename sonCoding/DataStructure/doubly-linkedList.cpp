#include <iostream>
using namespace std;

struct Node{
  int data;
  Node *next;
  Node *prev;
};

// *  *  *  *  *  *  //
//    Insert Node
// *  *  *  *  *  *  //
void Insert(Node **head, int data, int pos){
  int k = 1;
  Node *tempNode, *newNode;

  // 새 노드 생성
  newNode = (Node*)malloc(sizeof(struct Node));

  if(!newNode){ // 메모리 에러 체크
    cout << "Memory Error" << endl;
    return;
  }
  // 새 노드에 데이터 저장
  newNode->data = data;

  // pos=1 이면, 시작 위치에 노드 삽입
  if(pos == 1){
    newNode->next = *head;
    newNode->prev = NULL;
    (*head)->prev = newNode;
    *head = newNode;
    return; // 처음 위치에 삽입 완료
  }

  // pos > 1 이면, pos번째 노드를 temp에 저장한다 (단 temp는 마지막 노드가 아님)
  tempNode = *head;
  while( (k < pos) && tempNode->next != NULL){
    tempNode = tempNode->next;
    k++;
  }
  // 노드 갯수보다 pos이 클 때
  if(k!=pos)
    cout << "일치하는 위치가 없습니다" << endl;

  newNode->next = tempNode->next;
  newNode->prev = tempNode;
  tempNode->next->prev = newNode;
  tempNode->next = newNode;
  return;
}

// *  *  *  *  *  *  //
//    Print Node
// *  *  *  *  *  *  //
void printNode(Node **head){
  Node *temp;
  if(*head){
    temp = *head;
    cout << "NODE LIST:";
    while(true){
      cout << temp->data;
      temp = temp->next;
      if(temp->next == NULL){
        cout << "->" << temp->data << endl;
        break;
      }else
        cout << "->";
    }
  }else
    cout << "head 노드가 없습니다." << endl;
}

int main(){
  // Create Node List
  Node *hNode,*tNode;
  hNode = (Node*)malloc(sizeof(struct Node));
  tNode = (Node*)malloc(sizeof(struct Node));

  hNode->data = 10;
  hNode->next = tNode;
  hNode->prev = NULL;

  tNode->data = 20;
  tNode->next = NULL;
  tNode->prev = hNode;


  // 1. Insert Node
  cout << "HEAD:" << hNode->data << endl;
  Insert(&hNode,15,1);
  cout << "HEAD:" << hNode->data << endl;
  Insert(&hNode,222,2);
  Insert(&hNode,333,2);

 printNode(&hNode);
  // 2. Remove Node

  // 3. Search Node

  //free newNode

  return 0;
}
