struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    
    struct ListNode *c1,*c2,*c3,*result;
    c1 = l1;
    c2 = l2;
    result = (struct ListNode*)malloc(sizeof(struct ListNode));
    result->val = 0;
    result->next = NULL;
    c3 = result;
   
    
    while(c1!=NULL || c2!=NULL){
    
        if(c1==NULL){
          c3->val += c2->val;    
        }
        else if(c2==NULL){
          c3->val += c1->val;    
        }
        else{
          c3->val += (c1->val + c2->val);    
        }
        
        
         if(c1==NULL || c1->next == NULL) 
          c1=NULL;
        else 
          c1 = c1->next;
        
        if(c2==NULL || c2->next == NULL) 
          c2=NULL;
        else 
          c2 = c2->next;
        
        
        if(c3->val>=10){
            c3->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            c3->next->val = c3->val/10;
            c3->val = c3->val % 10;
            c3 = c3->next;
        }
        else{
            
          if(c1!=NULL || c2!=NULL){
              
               c3->next = (struct ListNode*)malloc(sizeof(struct ListNode));
               c3->next->val = 0;
               c3 = c3->next;
              
          }    
            
        }
        
         c3->next = NULL;
        
       
        
    }
      
 
    
       return result;

    
    
}