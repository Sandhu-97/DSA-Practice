#include <bits/stdc++.h>

using namespace std;

int max_consecutive_ones(vector<int> arr){
    int max = 0;
    int sum=0;
    for (int i: arr){
        if (i==1) sum+=1;
        else sum=0;
        if (sum>max) max=sum;
        
    }

    return max;

}

int main(){
    vector<int> arr = {1, 0, 1, 1, 0, 1};
    cout << max_consecutive_ones(arr);
}