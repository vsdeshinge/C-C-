#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int data[] = {1, 2, 3, 2, 5};
    int n = sizeof(data)/sizeof(data[0]);
    int k = 3;
    if (binary_search(data, data + 5, k))
        printf("found!\n");
    else
        printf("not found\n");


    //replace the array number

    replace(data, data + 5, 3, 2);
    for(int i=0;i<n;i++){
        cout<<data[i];
    }
    cout<<endl;

    // rotate the array 

    rotate(data,data+2,data+5);
    for(int i=0;i<n;i++){
        cout<<data[i];
    }

    //rotate swap replace merge remove
}