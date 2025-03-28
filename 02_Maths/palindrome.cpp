#include <iostream>

using namespace std;

bool isPalindrome(int n){
    int temp = n;
    int reverse=0;
    while (temp){
        int digit = temp%10;
        reverse = reverse*10 + digit;
        temp/=10;
    }
    return reverse==n;
}

int main(){
    cout << (isPalindrome(7789)? "Palindrome" : "Not Palindrome");
}