#include<bits\stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
}*first=NULL;

void create(int A[], int n)
{    
    
     int i;
     struct Node *t, *last;
       first=new Node;
     first->data=A[0];
     first->next=NULL;
     last=first;

     for( i=1;i< n; i++){
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
        cout<<p->data<<"  ";
        p=p->next;
    }
}
void Insert(struct Node *p,int index,int x)
{
 struct Node *t;
 int i;
 t=new Node;
 t->data=x;
 
 if(index == 0)
 {
 t->next=first;
 first=t;
 }
 else
 {
 for(i=0;i<index-1;i++)
 p=p->next;
 t->next=p->next;
 p->next=t;
 
 }
}

int main()
{  
    
   int A[]={1,2,3,4,5,6};
   create(A,6);
   Insert(first,4,555555);

   Display(first);
}