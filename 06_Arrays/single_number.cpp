#include <bits/stdc++.h>

using namespace std;

int single_number(vector<int> arr){
    int res=0;
    for (int i:arr) res^=i;
    return res;
}


int main(){
    vector<int> arr = {4,1,2,1,2};
    cout << single_number(arr);
}