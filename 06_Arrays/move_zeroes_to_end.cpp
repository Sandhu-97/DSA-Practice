#include <bits/stdc++.h>

using namespace std;


void printVector(vector<int> arr){

    for (int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;
}
void move_zeroes(vector<int> nums){
    for (int i=0;i<nums.size()-1;i++){
        if (nums[i]==0){
            for (int j=i+1;j<nums.size();j++){
                if (nums[j]!=0) {
                    swap(nums[i], nums[j]);
                    break;
                }
            }
        }
    }
    printVector(nums);
}

void move_zeroes_optimal(vector<int> arr){
    int i=0;
    for (int j=0;j<arr.size();j++){
        if (arr[j]==0) continue;
        swap(arr[i], arr[j]);
        i++;
    }
    printVector(arr);
}

int main(){
    vector<int> arr=  {1,2,0,1,0,4,0,1};
    move_zeroes_optimal(arr);
}