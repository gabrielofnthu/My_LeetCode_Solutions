bool judgeCircle(char* moves) {
    
    int size = strlen(moves);
    int offsetX = 0;
    int offsetY = 0;
    
    for(int i = 0; i < size; i++){
        
        switch(moves[i]){
            case 'U':
                offsetY++;
                break;
            case 'L':
                offsetX--;
                break;
            case 'D':
                offsetY--;
                break;
            case 'R':
                offsetX++;
                break;
        }
    }
    
    if(offsetX+offsetY){
        return false;
    }
    
    return true;
    
}