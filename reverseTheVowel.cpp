#include<iostream>
#include<string>

using namespace std;

string reverseVowels(string s) {
    // 
    

    // solution 2;
    int left = 0, right = s.length() - 1;
    while (left < right) {
        while (left < right && !('a' <= s[left] && s[left] <= 'z' || 'A' <= s[left] && s[left] <= 'Z'))
            left++;
        while (left < right && !('a' <= s[right] && s[right] <= 'z' || 'A' <= s[right] && s[right] <= 'Z'))
            right--;
        if (left < right)
            swap(s[left++], s[right--]);
    }
    return s;
}

int main() {
    string a = "leetcode";
    cout << reverseVowels(a); // Output: "leotcede"
    return 0;
}
