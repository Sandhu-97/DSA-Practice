#include <bits/stdc++.h>

using namespace std;

int linear_search(vector<int> arr, int n){
    for (int i=0;i<arr.size();i++){
        if (arr[i]==n) return i;
    }
    return -1;
}

int main(){
    vector<int> arr = {5,4,3,2,1};

    cout << linear_search(arr, 5);
    return 0;
}