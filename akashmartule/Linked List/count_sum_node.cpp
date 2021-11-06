#include<bits\stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
void push(Node** head_ref, int new_data)
{
    Node* new_node= new Node();
    new_node->data=new_data;
    new_node->next= (*head_ref);
    (*head_ref)=new_node;

}
int getCount(Node* head)
{
    int count=0;
    Node* current=head;
    while(current !=NULL)
    {
         count++;
         current=current->next;
    }
    return count;
}
int getsum(Node* head)
{
    int sum=0;
    Node* current=head;
    while(current !=NULL ){
        sum=sum + current->data;
        current=current->next;
    }
    return sum;
}

int main()
{
    Node*head =NULL;

    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    push(&head, 6);

    cout<<"Count of nodes is"<<getCount(head)<<endl;
    

    cout<<"Sum of linked list: "<<getsum(head)<<endl;
    return 0;
}