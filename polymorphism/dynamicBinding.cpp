#include<iostream>
using namespace std;

class A{
    public: virtual void f(){
        cout<< "you r in class A"<<endl;

    }
};

class B: public A {
    public: 
   
    virtual void f(){// treat it as overload function  
        cout<< "you r in class B"<<endl;
    }// overloads f()
};
int main(){
    A a;
    B b;

    A *p;
    p = &a;
    p->f(); // B::f(int)
    p = &b;
    p->f(); //A::f()
}