
#include <bits/stdc++.h>

using namespace std;



void reversePrint(SinglyLinkedListNode* head) {
    if (head == NULL) 
    return; 
  
    // print the list after head node 
    reversePrint(head->next); 
  
    // After everything else is printed, print head 
    cout << head->data<<"\n" ; 

}

int main()