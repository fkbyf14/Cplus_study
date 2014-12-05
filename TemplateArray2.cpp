#include <cstddef>

template <typename T>
class Array
//���������� ����� Array �� ��������� �� ��, ��� ��� ���� T ��������� �������� ������������.
{public:
     explicit Array(size_t size = 0, const T& value = T())
         :data_(new T[size]), size_(size){
             for(size_t i = 0;i!=size_;i++){
                 data_[i] = value;
         }
         }
   
 Array(){
     return new T[];
 }
    //   ����������� ������, ������� ����� �������
    //   ��� ����������. ������ ��������� ������
    //   Array.
    //
    // Array(const Array &)
    //   ����������� �����������, ������� �������
    //   ����� ���������. ��� ���� T ��������
    //   ����������� �� ���������.
    //
    // ~Array()
    //   ����������, ���� �� ��� ���������.
    //
    // Array& operator=(...)
    //   �������� ������������.
    //
    // size_t size() const
    //   ���������� ������ ������� (����������
    //                              ��������).
    //
    // T& operator[](size_t)
    // const T& operator[](size_t) const
    //   ��� ������ ��������� ������� �� �������.
};