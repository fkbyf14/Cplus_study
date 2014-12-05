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

    Rational& operator+=(Rational rational);
    Rational& operator-=(Rational rational);
    Rational& operator*=(Rational rational);
    Rational& operator/=(Rational rational);

    Rational operator-();
    Rational operator+();
    
    Rational operator+(Rational a,Rational b) {
?         return a += b;
       }
    Rational operator-(Rational a,Rational b) {
?         return a -= b;
       }
    Rational operator*(Rational a,Rational b) {
?         return a *= b;
       }
    Rational operator/(Rational a,Rational b) {
?         return a /= b;
       }
    Rational operator+(Rational a,int b) {
           
        Rational *x = new Rational(b, 1);
?         return a += x;
       }
    Rational operator-(Rational a,int b) {
           
        Rational *x = new Rational(b, 1);
?         return a -= x;
       }
    Rational operator*(Rational a,int b) {
           
        Rational *x = new Rational(b, 1);
?         return a *= x;
       }
    Rational operator/(Rational a,int b) {
           
        Rational *x = new Rational(b, 1);
?         return a /= x;
       }

private:
    int numerator_;
    unsigned denominator_;
};