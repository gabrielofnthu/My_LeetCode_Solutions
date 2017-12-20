char* frequencySort(char* s) {
    
    int buf[123] = {0};
    int max=0,ind=-1,cur=0,i;
    int length = strlen(s);
    
    if(length==0) return s;
    
    char *ans = (char*)malloc(sizeof(char)*length);
    memset (ans,'0',length);
    
    
    
    for(i=0;i<length;i++){
    
       buf[s[i]]++; 
    }
    
    
    while(1){
    
     for(i=1;i<123;i++){
         
         if(buf[i]>max){
             max = buf[i];
             ind = i;
         }
         
     }
     
      while(buf[ind]>0)
      {
          ans[cur] = ind;
          buf[ind]--;
          cur++;
      } 
     
     if(max==0) break;
     else max = 0;
    
       
}
    
    for(i=0;i<length;i++){
        s[i] = ans[i];            //I dont know why Wrong Answer happened when I return ans directly? 
    }

    
    return s;
}