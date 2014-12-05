#include <cstddef>

template <typename T>
class Array
//реализуйте класс Array не полагаясь на то, что для типа T определен оператор присваивания.
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
    //   конструктор класса, который можно вызвать
    //   без параметров. Должен создавать пустой
    //   Array.
    //
    // Array(const Array &)
    //   конструктор копирования, который создает
    //   копию параметра. Для типа T оператор
    //   присвивания не определен.
    //
    // ~Array()
    //   деструктор, если он вам необходим.
    //
    // Array& operator=(...)
    //   оператор присваивания.
    //
    // size_t size() const
    //   возвращает размер массива (количество
    //                              элемнтов).
    //
    // T& operator[](size_t)
    // const T& operator[](size_t) const
    //   две версии оператора доступа по индексу.
};