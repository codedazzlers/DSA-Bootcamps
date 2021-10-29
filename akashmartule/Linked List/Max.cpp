#include<bits\stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
}*first=NULL;

void create(int A[],int n)
{
    int i;
    struct Node *t, *last;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void Display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int Max(struct Node*p)
{
    int max=INT_MIN;
    while(p!=NULL)
    {
        if(p->data>max)
        max=p->data;
        p=p->next;
    }
    return max;
}

int main()
{
    
   

  int  A[]={1,2,3,4,5,6};
  create(A,6);
  Display(first);
  cout<<"maximum element is: "<<Max(first);
  return 0;


}

