#include <bits/stdc++.h>
using namespace std;
 
class Node {
public:
    int data;
    Node* next;
};
void printList(Node* n)
  {

      while(n!=NULL)
      {
          cout<<n->data<<" ";
          n = n->next;
      }
}
 
// Program to create a simple linked
// list with 3 nodes
int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
 
    // allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

    printList(head);
    return 0;
}