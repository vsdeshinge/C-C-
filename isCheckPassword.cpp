#include<iostream>
#include<string>
#include<regex>
#include<cmath>
#include<vector>
using namespace std;

// Function prototypes
int isCheckPassword(string s);
vector<int> findCount(int arr[], int length, int num, int diff);
int checkTheSequence(int arr[]);
int elementIsGreaterThanPreviousElements(int arr[], int size);
int maximumOnesInRow(int[], int);

int main(){
    // string password;
    // cin >> password;
    
    // cout << isCheckPassword(password);

    int arr[] = {12, 3, 14, 56, 77, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    // vector<int> result = findCount(arr, 6, 13, 2);
    // for(int num : result) {
    //     cout << num << " ";
    // }
    // cout << endl;

    cout<<"the count  "<<elementIsGreaterThanPreviousElements(arr, size);

    int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    cout<< "the maximum number of 1's is in row"<<maximumOnesInRow(arr1, size1);
}

// int isCheckPassword(string s){
//     regex pattern("^(?=.*\\d)(?=.*[A-Z])(?!\\d)\\S{4,}$");

//     if (regex_match(s, pattern)) {
//         return 1;
//     } else {
//         return 0;
//     }
// }

// vector<int> findCount(int arr[], int length, int num, int diff) {
//     vector<int> count;
//     int target = abs(num - diff);

//     for (int i = 0; i < length; i++) {
//         if (arr[i] <= target) {
//             count.push_back(arr[i]);
//         }
//     }
//     return count;
// }
// bool check(int arr[], int i){

//     while(j==-1){
//             if(arr[j] > arr[i]){
//                 return true;


//             }
//             j--;
//         }


//     return false;



// }

// int checkTheSequence(int arr[]){
//     int count;
//     int j;
//     for(int i=0; i< arr.length; i++){
//         bool flag = false;
//         int j=i;

//         if(!(check(arr,i))){
//             count++;
//         }
        
//     }
//     cout<<count;
// }

int elementIsGreaterThanPreviousElements(int a[], int size) {
    int max = 0;
    int count = 0;
     

    for (int i = 0; i < size; i++) { 
        if (i == 0) {
            count = 1;
            max = a[i];
        } else if (a[i] > max) {
            count++;
            max = a[i];
        }
    }

    return count;
}

int maximumOnesInRow(int[][] arr, int size){
    for(int i=0;i< size; i++){
        int sizeArr = sizeof(arr[i]);
        for(int j=0; j<sizeArr; j++){
            cout<<arr[i][j]<<endl;
        }
    }
    return 0;
}




