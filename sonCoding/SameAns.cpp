#include <iostream>

using namespace std;

// 노드 클래스 정의
class Node{
public:
  int val = -1;
  Node * left;
  Node * right;

  // 양 노드 삽입
  void insert(Node * left, Node * right){
    this->left = left;
    this->right = right;
  }
};

// 공통 조상을 찾는 함수
Node findCommon(Node *root, Node *first, Node *second){
  int value1 = first->val;
  int value2 = second->val;

  while(root->val != -1){
    int val = root->val;
    if((val > value1) && (val > value2))
      root = root->left;
    else if( (val < value1) && (val < value2))
      root = root->right;
    else
      return *root;
  }
   return *root;
}

int main(){

  // 임의로 트리 구성
  Node root,l1,r1,l2,r2,l3,r3;
  root.val = 20;
  l1.val = 8;
  r1.val = 22;
  l2.val = 4;
  r2.val = 12;
  l3.val = 10;
  r3.val = 14;
  root.insert(&l1,&r1);
  l1.insert(&l2,&r2);
  r2.insert(&l3,&r3);

  // 두 노드의 가장 가까운 공통 조상을 찾는다.
  cout<<"The Lowest Common Ancestor is : ";
  cout<<findCommon(&root, &r2, &r3).val<<endl;

  return 0;
}
