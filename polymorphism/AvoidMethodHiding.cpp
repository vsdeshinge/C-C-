#include<iostream>
using namespace std;

class A{
    public: void f(){
        cout<< "you r in class A"<<endl;

    }
};

class B: public A {
    public: 
    using A::f;// do preserve the function from class A
    void f(int){// treat it as overload function  
        cout<< "you r in class B"<<endl;
    }// overloads f()
};
int main(){
    B b;
    b.f(3); // B::f(int)
    b.f(); //A::f()
}