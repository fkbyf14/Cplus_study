#include <cstddef>
#include <cstring>

struct String {
    size_t size_;
    char *str_;
    String(const char *str = "");
    String(size_t n, char c);
    ~String();

    size_t size() {
      
       
        return size_;
    }

    char &at(size_t idx) {
       
            return str_[idx];
    }

    const char *c_str() {
       return str_;
    }
        

   
};