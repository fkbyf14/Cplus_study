#include <cstddef>

template <typename T>
class Array
{public:
     explicit Array(size_t size = 0, const T& value = T())
         :data_(new T[size]), size_(size){
             for(size_t i = 0;i!=size_;i++){
                 data_[i] = value;
         }
         }
    //   конструктор класса, который создает
    //   Array размера size, заполненный значениями
    //   value типа T. Считайте что у типа T есть
    //   конструктор, который можно вызвать без
    //   без параметров, либо он ему не нужен.
    //
     Array(const Array &a)
         :size_(a.size()), data_(new T[a.size()]){
            
             for(size_t i = 0;i!=size_;i++)
                 data_[i] = a.data_[i];
         }
    //   конструктор копирования, который создает
    //   копию параметра. Считайте, что для типа
    //   T определен оператор присваивания.
    //
    
             ~Array(){
                 delete[] data_;
             }
      Array& operator=(Array const &a)
     {
         if(this!=&a){
             delete[] data_;
             size_ = a.size_;
             data_ = new T[a.size()];
             for(size_t i = 0;i!=size_;i++)
                 data_[i] = a.data_[i];
         }
         return *this;
     }
         
    
         size_t size() const{
             return size_;
         }
    
         T& operator[](size_t i){
              return data_[i];   
         }
         const T& operator[](size_t i) const{
             return data_[i];
         }
    //   две версии оператора доступа по индексу.
    private:
        T *data_;
         size_t size_;
};