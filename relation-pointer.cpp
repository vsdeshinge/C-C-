#include<iostream>

using namespace std;


#if 0
int Ref_const(const int &x){
    // this type is not accepted in c++ we need to specify as x+1;
    ++x;
    return (x);
}

#endif


int Ref_const1(const int &x){
    return(x +1);
}

// returning a left  side reference 

int& Return_ref(int &x){
    return (x);
}

//risky reference

int& Return_ref_risky(int &x){
    int t=x;
    t++;
    return (t);
}


int main(){
    
    int a=10, b;
    b = Ref_const1(a);
    cout<<"a = "<< a <<" and "<< " b = "<<b;

    // return by right side of referece

    Return_ref(a) =3;
    cout<< " a ="<<a;

    // returning is risky when we use an extra variable and return it
    // it cannot change the variable
    Return_ref_risky(a)=5;
    cout<< " a= "<< a;


}