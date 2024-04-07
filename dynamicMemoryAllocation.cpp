#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int *p = new int(5); // similar thing as malloc
    cout << *p << endl;
    delete p;

    // operator new() is function new is operand both are different we have other fuction also to define new like funtion but this not that related to
    // function operator new with operator delete
    int *p1 = (int *)operator new(sizeof(int));
    *p1 = 7;
    cout << *p1<<endl;
    operator delete(p1); // dealocation of memory from heap

    // array operator new with array operator delete

    int *a = new int[3];
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    for (int i = 0; i < 3; i++)
    {
        cout << "a[" << i << "] =" << a[i] << " "<<endl;
    }

    delete[] a;


    //placement new in c++

    // creating new array where the object should be without allocating system memory and assignig the address

    unsigned char buf[sizeof(int)*2];// creates buffer stack which should accumulate only two objects

    //placement new in buffer buf
    int *pInt = new (buf) int(3);// but points initial addr
    int *qInt = new (buf+sizeof(int)) int(5);// it points for next size after 4 bytes of address

    int *pBuf = (int *)(buf + 0);
    int *qBuf = (int *)(buf+sizeof(int));

    cout<< pInt<< "  "<<qInt<<endl;
    cout<< pBuf<< "  "<<qBuf<<endl;
    cout<< *pInt<< "  "<<*qInt<<endl;
    cout<< *pBuf<< "  "<<*qBuf<<endl;

    int *rInt = new int(7);
    // it is dynamically allloted by system so we have to delete it
    cout<<rInt<<"    " << *rInt;// free store address
    delete rInt;

    // No delete for Placement new
    // Allocation by placement can not be deleted
 


}
