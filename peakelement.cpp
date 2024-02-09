#include <iostream>
using namespace std;

int findPeakElement(int nums[],int size) {

  
        
     int start =0;
    int end=size-1;
   

    while(start<end){
        int mid= (start + end)/2;
        if(nums[mid]>nums[mid+1]){
            end =mid;

        }
        else{
            start = mid+1;
        }

        
        
   
        
    }
    return start;

    }

int main() {
    int a[] = {1, 2, 1, 3, 5, 6, 4};
    int size = sizeof(a) / sizeof(a[0]);
    int b =findPeakElement(a,size);
    std::cout<<b;

    return 0;
}