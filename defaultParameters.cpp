#include<iostream>

using namespace std;

int IdentityFuctioon(int a =10){
    return a;
}

int main(){
    int x=5,b;

    cout<<IdentityFuctioon(x)<<endl;
    //if you pass the value then it willreturn the value other wise   it will print default value
    cout<<IdentityFuctioon()<<endl;
}