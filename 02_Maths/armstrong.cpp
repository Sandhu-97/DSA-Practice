#include <iostream>
#include <cmath>
using namespace std;


bool armstrong(int n){
    int temp =n;
    int digits=  0;
    while (temp){
        digits++;
        temp/=10;
    }

    temp = n;
    int sum = 0;
    while(temp){
        int digit = temp%10;
        sum = sum + pow(digit, digits);
        temp/=10;
    }
    
    return n==sum;
}

int main(){
    cout << armstrong(373);
}