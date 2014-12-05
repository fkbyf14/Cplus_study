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
    //   ����������� ������, ������� �������
    //   Array ������� size, ����������� ����������
    //   value ���� T. �������� ��� � ���� T ����
    //   �����������, ������� ����� ������� ���
    //   ��� ����������, ���� �� ��� �� �����.
    //
     Array(const Array &a)
         :size_(a.size()), data_(new T[a.size()]){
            
             for(size_t i = 0;i!=size_;i++)
                 data_[i] = a.data_[i];
         }
    //   ����������� �����������, ������� �������
    //   ����� ���������. ��������, ��� ��� ����
    //   T ��������� �������� ������������.
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
    //   ��� ������ ��������� ������� �� �������.
    private:
        T *data_;
         size_t size_;
};