 String(const String &str) {
        :size_(str.size_), str_(new char[size_])
        {
            for(size_t i = 0;i!= size_;i++){
                
                str_[i] = str.str_[i];
        }
        }
    }