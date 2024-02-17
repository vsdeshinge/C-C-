#include<iostream>
#define TABLE_SIZE 100;
#undef TABLE_SIZE;
#define TABLE_SIZE 200;

#define str(x) #x;

#define glue(a,b) a ## b;

using namespace std;

#if 0
int main(){
    cout<<hello world;
}
#endif

#define SQUARE(x) x * x;
#define SQUARE1(x) (x)*(x);//macro safe



inline int SQUARE2(int x){
    return x * x;
}


int main(){
    
    cout<<TABLE_SIZE;
    cout<<str('test'); 
    //glue(c,out) << "test";
    cout<<"file name"<<__FILE__<<endl;
    cout<<"Line"<<__LINE__<<endl;
    cout<<"date"<<__DATE__<<endl; 
    cout<<"time"<<__TIME__<<endl;

    int a = 3, b;
    b = SQUARE(a+1);
    cout<<b<<endl;
    // b = a + (1 * a) +1;    

    b = SQUARE1(a+1);
    cout<<b<<endl;

    int c = SQUARE1(++a);
    // it will print 25 instead of 16
    // use inline fuction to eradicate errors
    cout<<c;

    b = SQUARE2(++a);
    cout<<b<<endl;
      

      

    
    
}