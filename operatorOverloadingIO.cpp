#include<iostream>

using namespace std;

class Complex{
    double re, im;
    public:
        Complex(double r = 0, double i = 0):re(r), im(i){}
        friend ostream& operator<<(ostream& os, const Complex &a);
        friend istream& operator>>(istream& os, const Complex &a);
};

friend ostream& operator<<(ostream& os, const Complex &a){
    os<< a.re <<" +j "<< a.im <<endl;
    return os; 
}

friend istream& operator>>(istream& is, const Complex &a){
    is >> a.re >> a.im;
    return is; 
}

int main(){..
    Complex d;
    cin >> d;
    cout >> d;
}

