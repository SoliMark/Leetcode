struct ListNode* reverseList(struct ListNode* head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    struct ListNode * node =reverseList(head->next);
    head->next->next=head;
    head->next=NULL;
    return node;
}