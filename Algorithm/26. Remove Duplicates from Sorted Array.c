int removeDuplicates(int* nums, int numsSize) {
    
    if(numsSize == 0){
        return 0;
    }
    
    int current = 0, detect = 1;
    
    while (detect != numsSize){
        
        if(nums[current] == nums[detect]){
            detect++;
        }else{
            current++;
            nums[current] = nums[detect];
            detect++;
        }
    
    }
    
    return current + 1;
    
}