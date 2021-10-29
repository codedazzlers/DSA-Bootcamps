class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
        return head;
    }
    ListNode* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    for(int i=0;i<(k%count);i++){
        ListNode* nex=head;
        ListNode* prev=NULL;
        while(nex->next!=NULL){
            prev=nex;
            nex=nex->next;
        }
        nex->next=head;
        prev->next=NULL;
        head=nex;
    }
    return head;
        
    }
};