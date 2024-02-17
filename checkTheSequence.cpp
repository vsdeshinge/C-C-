#include<iostream>
#include<string>

using namespace std;

bool checkTheSequence(string a, string b){
    
    string max = a.length()>b.length()?a:b;
    string min = a.length()<b.length()?a:b;
    int count=0;
    if(a.length()==0 || b.length()==0){
        return true;
    }
    
   
    
   
    for(int i=0;i<max.length();i++){
        
        if(max[i]==min[count]){
            count++;
        }
        if(count<min.length()-1){
            return true;
        }
    
        
    }

    return false;



}

int main(){
    string  a= "v";
    string b = "b";
    cout<<checkTheSequence(a,b);
    
}