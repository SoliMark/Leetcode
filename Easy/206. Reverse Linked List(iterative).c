struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *pre=NULL,*temp;
   
    while(head){
        temp=head->next;
        head->next=pre;
        pre=head;
        head=temp;
    }
    return pre;
}