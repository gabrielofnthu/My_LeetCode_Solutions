char* addBinary(char* a, char* b) {
    
    
    int lengthA = 0, lengthB = 0, i ,end, lengthAns, carry;
    
    lengthA = strlen(a);
    lengthB = strlen(b);
    
    if(lengthA >= lengthB){
        lengthAns = lengthA;
    }else{
        lengthAns = lengthB;
    }

    char reverseA[1000]={'0'};
    char reverseB[1000]={'0'};
    int reverseAns[1001]={0};

    end = lengthA-1;
    for(i = 0; i < lengthA ; i++){
        reverseA[i] = a[end];
        end--;
    }
    
    end = lengthB-1;
    for(i = 0; i < lengthB ; i++){
        reverseB[i] = b[end];
        end--;
    }
    
    i = 0;
    carry  = 0;
    while(i <= lengthAns){
        
      if(i < lengthA && i < lengthB ){
        reverseAns[i] = (reverseA[i]-'0') + (reverseB[i]-'0') + carry;
      }else if(i >= lengthB && i < lengthA){
        reverseAns[i] = (reverseA[i]-'0') + carry;
      }else if(i >= lengthA && i < lengthB){
        reverseAns[i] = (reverseB[i]-'0') + carry;
      }else if( i >= lengthA && i>=lengthB && carry != 0 ){
        reverseAns[i] = carry;
          break;
      }
      carry = reverseAns[i] / 2;
      reverseAns[i] = reverseAns[i] % 2;
      i++;
    }    
    
    if(reverseAns[lengthAns] == 0){
        lengthAns = lengthAns - 1;
    }
  
    char *ans = (char*) malloc(sizeof(char) * 1000);
    
     for(i = 0; i <= lengthAns ; i++){
        ans[i] = reverseAns[lengthAns-i] + '0';
    }
    ans[lengthAns+1] = NULL;
    
    return ans;
   
    
}

    