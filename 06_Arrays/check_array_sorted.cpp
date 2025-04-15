#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> nums){
    for (int i=0;i<nums.size()-1;i++){
        if (nums[i] > nums[i+1]) return false;
    }
    return true;
}


int main(){
    vector<int> arr = {5,4,6,7,8};

    cout << isSorted(arr);
}