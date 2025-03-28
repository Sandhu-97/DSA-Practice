#include <iostream>

using namespace std;

int reversed(int n){
    int num = 0;
    while (n){
        int digit=n%10;
        num = num*10 +digit;
        n/=10;
    }
    return num;
}

int main(){
    cout << reversed(5432154321);
}