#include <cstddef>
#include <cstring>

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
String(size_t n, char c) {
        if(n==0){
             str_ = new char[1];
          
            }
        if(n!=0){
        str_ = new char[n];
        for(size_t i = 0;i < n;i++){
            str_[i] = c;
            }
            }
        
         str_[n] = '\0';
        size_ = n;
    }
size_t size() {
      
       
        return size_;
    }

    char &at(size_t idx) {
       
            return str_[idx];
    }

    const char *c_str() {
       return str_;
    }
char at(size_t idx) const{
         return str_[idx];
    }//можно вызывать на константном объекте (имеется ввиду логическая константность).