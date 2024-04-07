#include<iostream>

using namespace std;

//namespace -- its a declarative Region
// when two or more people working on sameproject when they give same names it gives overides to  prevent it we use namespace

int data=0;

namespace name1{
    int data =1;
    namespace name2{
        int data = 2;
    }
}
namespace name1{
    int data2 = 3;
}
namespace name3{
    int data = 4;
}
using namespace name3;

int main(){
    //cout<< data << endl;
    //^^ when u use using namespace ::__ is for global access
    cout<< ::data << endl;
    cout<< name1::data <<endl;
    cout<< name1::name2:: data<<endl;
    //^^ nested namespace
    cout<< name1::data2 <<endl;
    cout<< name3::data <<endl;
    
    return 0;
}