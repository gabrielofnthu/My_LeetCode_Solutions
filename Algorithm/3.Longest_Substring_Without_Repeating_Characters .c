int lengthOfLongestSubstring(char* s) {
    
    int pre = 0, cursor=1, ans=1, tmp=1, i, length = strlen(s);

    if(length==0) return 0;
    
    while(cursor<length){
    
       for(i=pre;i<cursor;i++){
           
           //printf("%c %c ���\n",s[i],s[cursor]);
           
           if(s[i] == s[cursor]){
               
             // printf("%c %c �P\n",s[i],s[cursor]);
                pre++;
                cursor = pre;
                tmp = 0;
                break;
           }
           
           tmp++;
           //printf("%c %c ���P tmp = %d\n",s[i],s[cursor],tmp);
           
       }
        
           if(tmp>ans){
                ans = tmp;
           }
       
        tmp = 1;
        cursor++;
        
    }
    
    
    return ans;
    
}