bool hasAlternatingBits(int n) {
    
    int now = 0;
    int base = 2;
    int prev = (n/1) % 2;  //binarynize -> "(n/two)%2"
    
    while(base < n){
    
        now = ( n / base ) % base;
        if(prev == now){
            return false;
        }
        
        prev = now;
        n = n / base;
    }
    
    return true;
    
}