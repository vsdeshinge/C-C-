#include<iostream>
#include<string>

using namespace std;

string mergeAlternately(string word1, string word2) {
    int c = word1.length();
    int d = word2.length();
    int e = c + d;
    string word3 = "";
    for (int i = 0; i < e; i++) {
        if (i < c) {
            word3 += word1[i];
        }
        if (i < d) {
            word3 += word2[i];
        }
    }
    return word3;
}

int main() {
    string a = "ace";
    string b = "bd";
    cout << mergeAlternately(a, b);
    return 0;
}
