bool checkPerfectNumber(int num) {

    int mid = sqrt(num);
    //printf("mid= %d \n", mid);
    int divisor = 1;
    int sum = 0;
    
    if(num < 2){
        return false;
    }
    
    while(divisor <= mid){
     
        if(num % divisor == 0){
            
            //printf("find divisor = %d \n", divisor);
            sum += divisor;
            
            if(divisor > 1){
                //printf("find divisor = %d \n", num / divisor);
                sum += num/divisor;
            }
        }
        
        divisor++;
    }
    
    if(sum == num){
        return true;
    }
    
    return false;
}
