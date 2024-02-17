#include<iostream>
#include<stack>

using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids){
    if(asteroids.empty())
        return asteroids;



    stack<int> st;

    
   

    for(int i= asteroids.size()-1;i>0;i--){

        int a = asteroids[i];
        int b = asteroids[i-1];
        int c = a>b?a:b;
        if
        
        vector<int> result(st.size());

        for(int i=st.size()-1;i>=0;i--){
            result[i]= st.top();
            st.pop();
        }

    return result;


        
    }





int main(){
    vector<int> a = {}
    vectorasteroidCollision(a);
    
}