struct Rational
{
    Rational(int numerator = 0, int denominator = 1);

    void add(Rational rational);
    void sub(Rational rational);
    void mul(Rational rational);
    void div(Rational rational);

    void neg();
    void inv();
    double to_double() const;
    
    Rational&  operator+=(Rational const& rational){
        add(rational);
        return *this;
        
    }
     Rational&  operator+=(int a){
         
        Rational *b = new Rational(a,1);
         add(*b);
        return *this;
    }
    Rational&  operator-=(Rational const& rational){
        sub(rational);
        return *this;
    }
    Rational&  operator-=(int a){
        
        Rational *b = new Rational(a,1);
         sub(*b);
        return *this;
    }
    Rational&  operator*=(Rational const& rational){
        mul(rational);
        return *this;
    }
    Rational&  operator*=(int a){
        
        Rational *b = new Rational(a,1);
         mul(*b);
        return *this;
    }
    Rational&  operator/=(Rational const& rational){
        div(rational);
        return *this;
    }
    Rational& operator/=(int a){
        
        Rational *b = new Rational(a,1);
         div(*b);
        return *this;
    }
    Rational operator-(){
        neg();
        return *this;
    }
    Rational operator+(){
        mul(1);
        return *this;
    }


private:
    int numerator_;
    unsigned denominator_;
};