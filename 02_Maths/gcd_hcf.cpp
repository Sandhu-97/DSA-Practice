#include <iostream>
#include <cmath>


using namespace std;


int gcd(int a, int b){
    int ans = 1;
    int min = a>b? b : a;
    for (int i=2;i<min/2;i++){
        // cout << i << " ";
        if (a%i==0 && b%i==0){
            ans =i;
        }
    }
    return ans;
}

int gcd_optimal(int a, int b){
    
    while (a>0 && b>0){ 
        if (a>b){
            a = a%b;
        }
        else {
            b = b%a;
        }
    }
    return (a==0) ? b: a;
}

int main(){
    cout << gcd_optimal(2, 74);
}