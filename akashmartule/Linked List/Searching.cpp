#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;

}*first=NULL;
void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
     t=new Node;
     t->data=A[i];
     t->next=NULL;
     last->next=t;
     last=t;
    }

};
 Node* Lsearch(struct Node *p, int key)
{
    while(p!=NULL)
    {
        if(key==p->data);
         return p;
         p=p->next;
    }
    return NULL;
}
int main()
{
    int A[]={5,6,8,7,3,4};
    create(A,6);
    Lsearch(first,7);
    return 0;
    
}