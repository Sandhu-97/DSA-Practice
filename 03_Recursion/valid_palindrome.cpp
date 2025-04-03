#include <iostream>

using namespace std;

bool valid_palindrome(string s){
    int left = 0;
    int right = s.size()-1;
    while (left<right){
        if (s[left++]!=s[right--]) return false;
    }
    return true;
}

bool palindrome_recursive(string s, int i){
    if (i>=s.size()/2) return true;
    if (s[i]!=s[s.size()-i-1]) return false;
    return palindrome_recursive(s, i+1);
}

int main(){

    // cout << valid_palindrome("ABCDCBA");

    cout << palindrome_recursive("cABCDCBAc", 0);
}