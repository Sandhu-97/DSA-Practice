#include <iostream>
#include <vector>

using namespace std;

vector<int> reverse(vector<int> arr){
    vector<int> ans(arr.size());
    int k=arr.size()-1;
    for (int i=0;i<arr.size();i++){
        ans[k] = arr[i];
        k--;
    }
    return ans;


}

void reverse_same(int* arr){
    int i=0;
    int size = 10;
    int j=size-1;
    while (i<=j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for (int k=0;k<size;k++) cout << arr[k] << " ";
}

void reverse_recur(int* arr, int start, int end){
    if(start<end){
        swap(arr[start], arr[end]);
        reverse_recur(arr, start+1, end-1);
    }
    
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8, 9, 10};
    int size= sizeof(arr)/sizeof(arr[0]);
    
    // reverse_recur(arr, 0, size-1);
    // for (int k=0;k<size;k++) cout << arr[k] << " ";

    reverse_same(arr);

}