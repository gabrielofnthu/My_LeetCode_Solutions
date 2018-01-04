int strStr(char* haystack, char* needle) {

    int k = 0;
    bool flag = false;
    int sizeH = strlen(haystack);
    int sizeN = strlen(needle);
    
     if(!(sizeH + sizeN) || sizeN == 0){
        return 0;
    }
  
    for(int i = 0; i <= sizeH-sizeN; i++){
       
        k = 0;
        while(k < sizeN){
            
            if(needle[k] == haystack[i+k]){
                flag = true;
                k++;
            }else{
                flag = false;
                break;
            }
            
        }
        
        if(flag){
            return i;
        }
        
    }
    
    return -1;
}