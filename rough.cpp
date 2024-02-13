#include<iostream>
#include<string>

using namespace std;

string reverseWords(string s) {
    int start=0;
    int end=s.length()-1;
    cout<<end;
    
    while (start<=end)

    {
        if((s[start] ==' ')&& (s[(start+1)] ==' ' )){
            s.erase(s.begin()+start);
            start++;
            end--;
            
        }
        if((s[end] ==' ')&& (s[(end-1)] ==' ' )){
            s.erase(s.begin()+end);
            end--;
            
        }
        cout<<s<<endl;
        swap(s[start++], s[end--]);
        
    }

    return s;
    
     
     
        
    }



int main(){
    string s = "a  ab";
    cout<<reverseWords(s);
}