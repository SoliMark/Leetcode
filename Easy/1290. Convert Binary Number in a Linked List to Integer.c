int getDecimalValue(struct ListNode* head){
    int ret=0;
    while(head){
        
        ret=ret*2+head->val;        
        head=head->next;
    }
    return ret ;
}

