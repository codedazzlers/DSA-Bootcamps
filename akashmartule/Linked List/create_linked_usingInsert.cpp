#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
}*first=NULL;

int insert(struct  Node* p, int index,int x)
{
  struct Node *t;
  int i;
  t=new Node;
  t->data=x;

  if(index==0){
      t->next=first;
      first=t;
  }
  else{
      for(i=0;i<index;i++){
          p=p->next;
          t->next=p->next;
          p->next=t;
      }
  }
}
void Display(struct Node* p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main()
{
    insert(first,0,45);
    insert(first,1,455);
    insert(first,2,46);
    insert(first,0,47);
    Display(first);
    return 0;
}

