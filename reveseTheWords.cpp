#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

string splitWords( string s) {
    string words;
    string word;
    

    for(int i=0;i<s.length();i++){
        if(s[i]==' ' && s[i+1]==' '){
            int start =i+1;
            while(s[start++] !=' '){
                i++;
            }
            i++;
            
        }
        words +=s[i];
    }

    return words;


}
    


int main() {
    string s = "hello world   with extra spaces";
    cout<<splitWords(s);

    // Print the split words
 
    return 0;
}
