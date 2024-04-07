#include <iostream>
using namespace std;

class Stack {
private:
    int a, b;
    

public:
    Stack() : a(0), b(0) {}
    Stack(int c,int d):a(c),b(d){}// in back years we use init() function which we called directly like s.init();
    
    void print() {
        cout << a << " " << b << endl;
    }
    ~Stack(){
        cout<<"class is destroyed succesfully"<<endl;
    }
};



int main() {
    Stack s;
    // s.init() use in back years
    Stack s1(2,3);
    s.print();
    s1.print();
    

    
    return 0;
}
