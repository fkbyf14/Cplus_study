struct ICloneable
{
	virtual ICloneable* clone() const = 0;
	virtual ~ICloneable() { }
};

// ������ ValueHolder � ������� ���������� T,
// ������ ��������� ���� �������� ���� data_
// ���� T.
//
// � ������� ValueHolder ������ ���� ���������
// ����������� �� ������ ��������� ���� T,
// ������� �������������� ���� data_.
//
// ������ ValueHolder ������ �������������
// ��������� ICloneable, � ���������� ���������
// �� ����� �������, ��������� � ����, �� ������
// clone.

template <typename T>
    struct ValueHolder:ICloneable{
    
    explicit ValueHolder(const T& data = T()){
		new ValueHolder(data_);
        //this->data = data_;
    }
       ValueHolder* clone() const{
            return data_;
        }
        T *data_;
    }