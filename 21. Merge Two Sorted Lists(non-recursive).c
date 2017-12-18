/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    
    
    //直接用l1,l2串接應該會更快
    
    
    if(l1==NULL && l2 == NULL)
       return NULL;
    else if(l1==NULL && l2 != NULL)
       return l2;
    else if(l1!=NULL && l2 == NULL)
       return l1;
    
    struct ListNode *p1,*ans;
    ans = (struct ListNode*)malloc(sizeof(struct ListNode));
    ans->next = NULL;
    
    if(l1->val < l2->val){
        
          ans->val = l1->val;
          l1 = l1->next;
        }
        else{
           ans->val = l2->val;
           l2 = l2->next;
        }
    
    p1 = ans;
    
    while(l1!=NULL && l2!=NULL){
        
        if(l1->val < l2->val){
            ans->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            ans = ans->next;
            ans->next = NULL;
            ans->val = l1->val;
         
            l1 = l1->next;
        }
        else{
            ans->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            ans = ans->next;
            ans->next = NULL;
            ans->val = l2->val;
            
            l2 = l2->next;
        }
         
    }
    
    while(l1!=NULL){
        ans->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        ans = ans->next;
        ans->next = NULL;
        ans->val = l1->val;
       
        l1 = l1->next;
    }
    
     while(l2!=NULL){
        ans->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        ans = ans->next;
        ans->next = NULL;
        ans->val = l2->val;
       
        l2 = l2->next;
    }
    
    return p1;
    
}