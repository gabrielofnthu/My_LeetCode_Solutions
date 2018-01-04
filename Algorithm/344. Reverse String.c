char* reverseString(char* s) {
    
    int size = strlen(s);
    int end = size - 1;
    
    char *rev = (char*) malloc(sizeof(char) * size + 1);
    
    for(int i = 0; i < size; i++){
        rev[i] = s[end];
        end--;
    }
    
    rev[size] = NULL;
    
    return rev;
    
}