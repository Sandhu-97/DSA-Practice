
#include <bits/stdc++.h>


using namespace std;
void printVector(vector<int> arr){

    for (int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;

}

void rotate(vector<int> &nums, int k){
    reverse(nums.begin(), nums.end()-k);
    reverse(nums.end()-k, nums.end());
    reverse(nums.begin(), nums.end());
    printVector(nums);
}



int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8};
    rotate(arr, 3);
}