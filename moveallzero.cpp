#include<iostream>
#include<vector>

using namespace std;

void moveZeroes(vector<int>& nums);

int main() {
     vector<int> arr;
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(3);
    arr.push_back(12);
 

    moveZeroes(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int i;
    int count=0;

    for (i=0 ; i<n; i++) {
        if(nums[i] !=0){
            nums[count]=nums[i];
            cout<<count<<endl;
            count++;
            
        }
        
    }
    for(int i=n-1;i>=count;i--){
        nums[i]=0;
    }
}
