#include<bits\stdc++.h>
using namespace std;
struct Node
{
  int data;
  struct Node* next;
}*first=  NULL;
void create(int A[],int n)
{
    int i;
    struct Node *t, *last;
    first= new Node;
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

int Max(struct Node *p)
{
    int max= INT_MIN;
    while(p!=NULL)
    {
        if(p->data>max)
           max =p -> data;
           p=p->next;
    }
    return max;

}
void Display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<"  ";
        p=p->next;
    }
}


int main()
{
    int A[]= {4,5,6,7,8};
    create(A,5);
    Display(first);
    cout<<"Maximum node in linked list is: "<<Max(first);
    return 0;

}