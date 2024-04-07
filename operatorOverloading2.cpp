#include<iostream>

#include<stdlib.h>
using namespace std;

// void* operator new(size_t n){//first type of oveloaded new must be void*
//     cout<<"oveloaded new";
//     void *ptr = malloc(n);
//     return ptr;

// }

// void operator delete(void *p){// type of overloaded delete must be void
//     cout<<"oveloaded delete"<<endl;
//     free(p);
// }

void* operator new[](size_t n,char setv){
    void *t = operator new(n);
    memset (t,setv,n);
    return t;

}

void operator delete[](void *ss) throw(){
    operator delete(ss);
}

int main(){
    // int *p = new int;
    // *p = 30;
    // cout<<"The value is :"<< *p<<endl;
    // delete p;

    char *p = new('#')char[10];
    cout<< "p ="<<(unsigned int)(p)<< endl;
    for(int k=0; k< 10;k++){
        cout<<p[k];
    }

    delete [] p;



}