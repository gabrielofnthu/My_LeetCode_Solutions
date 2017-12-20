int hammingDistance(int x, int y) {

    
   
    int c,k1,k2,h_distance=0;
    
    for(c=31;c>=0;c--)
    {
       k1 = x>>c;
       k2 = y>>c;
       
       bool a,b;
       
       a = k1&1;
       b = k2&1;
       
       if(a!=b)
        h_distance++;
     
    }

    
    
    return h_distance;
    
   
    
}