#include <iostream>
#include <cmath>
using namespace std;

// BRUTE FORCE
int countDigits(int n){
    int count = 0;
    while(n){
        int digit = n%10;
        count++;
        n/=10;
    }
    return count;
}

// OPTIMAL

int countDigitsOptimal(int n){
    return floor(log10(n))+1;
}
int main(){
    int n = 564646531;
    cout << countDigitsOptimal(n);
}