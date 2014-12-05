int strstr(const char *str, const char *pattern) {
    int c = 0; 
    int z = 0;
    int p = 0; 
    while (str[c]!='\0') {
c++;
}
     
while (pattern[p]!='\0') {
p++;
}
if(p==0||c==0){
        return -1;
    }
    for(int i = 0; i <= c-1; i++){
        z=i;
        for(int k = 0; k <= p-1; k++){
            if(str[i+k]!=pattern[k]){
               break;
            }
            if(k==p-1){
                return z;
                }
                
            
            if(i+k == c -1){
                return -1;
            }
    }
        }
               if(z==c-1){
                   return -1;
               }return z;
}