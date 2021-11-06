#include<bits\stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
}*first= NULL;

void create(int A[],int n){
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

void Display(struct Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
void Delete(struct Node *p, int index)
{
    struct  Node *q=NULL;
    int x= -1,i;
    if(index==1){
        q=first;
        x=first->data;
        first=first->next;
        delete q;
        
    }
    else{
        q=p;
        p=p->next;
        q->next=p->next;
        x=p->data;
        delete p;
        
    }
    
    

}

int main()
{
    int A[]={6,5,4,3,2};
    create(A,5);
    // cout<<Delete<<first,3;
    Delete(first,3);
    Display(first);
}