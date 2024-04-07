#include<iostream>

using namespace std;

int countDigit(int n){
    int sum=0;
    int digit;
    while (n>10){
        // digit = n%10;
        // sum +=digit;
        // n = n/10;

        n = (n/10)+(n%10);


    }

    return n;
}

int main(){
    int n=123;
   
    cout<<countDigit(n);
}