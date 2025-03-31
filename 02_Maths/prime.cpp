#include <iostream>
#include <cmath>


using namespace std;

bool isPrime(int n) {
    if (n<=1) return false;
    if (n==2 || n==3) return true;
    if (n%2==0 || n%3==0) return false;

    for (int i=5;i<sqrt(n)+1;i++){
        if (n%i==0) return false;
    }
    return true;

}


int main(){
    cout << isPrime(11);
}