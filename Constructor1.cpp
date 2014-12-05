#include <cstddef> // size_t
#include <cstring> // strlen, strcpy



struct String {
         size_t size_;
    char *str_ ;
    String(const char *str = "") {
       int i = 0;
         
    while(str[i]!='\0') {
    i++;
}
    
     char *m = new char[i];
    for( int j = 0;j < i;j++){
        m[j] = str[j];
        }
        str_ = m;
 
    size_ = i;
    
        }
};