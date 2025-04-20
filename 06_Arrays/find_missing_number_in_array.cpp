#include<bits/stdc++.h>

using namespace std;

int missing_number(vector<int> arr, int n){
    int sum_n = n*(n+1)/2;
    int sum=0;
    for (int i: arr) sum+=i;
    return sum_n-sum;
}


int missing_number_xor(vector<int> arr, int n){
    int xor1=0;
    for (int i=1;i<=n;i++){
        xor1 =  xor1 ^ i;
    }
    int xor2=0;
    for (auto i: arr){
        xor2 = xor2^i;
    }
    return xor1^xor2;
}
int main(){
    vector<int> arr = {1,3,4, 5};
    cout << missing_number_xor(arr, 5);
}
