/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    
    struct ListNode *p = head;
    int size = 1,i=0;
    
    
    while(p->next!=NULL){
        size++;
        p = p->next;
    }
    
    if(n==size) {return head->next;}
    
    p = head;
    
    for(i=1;i<size-n;i++){
        p = p->next;
    }
    
    p-> next = p->next->next;
    
    
    return head;
    
}