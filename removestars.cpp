#include<iostream>
#include<stack>
#include<string>

using namespace std;
string removeStars(string s) {

    string b="";

    vector<char> a;

    for(int i=0;i<s.length();i++){
        if(s[i]=='*'){
            a.pop_back();
        }
        else
            a.push_back(s[i]);

    }
    for(int i=0;i<a.size();i++){

        b += a[i];


    }

    return b;

        
}

int main(){

    string a= "leet**cod*e";
    cout<<removeStars(a);


}