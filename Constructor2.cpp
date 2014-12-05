   /#include <cstddef>
#include <cstring>

struct String {
     size_t size_;
    char *str_;
    String(const char *str = "");

      
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
    
 
    

   
};