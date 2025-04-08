#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i=low;
    int j=high;

    while (i<j){
        while(i < high && arr[i] <= pivot) i++;
        while(j>low && arr[j] > pivot) j--;
        if (i<j) {
            swap(arr[i], arr[j]);
        } 
    }
    swap(arr[low], arr[j]);
    return j;
}


void quickSort(vector<int> &arr, int low, int high){

    if (low<high){
        int partition_index = partition(arr, low, high);
        quickSort(arr, low, partition_index-1);
        quickSort(arr, partition_index+1, high);
    }
}


int main(){
    vector<int> arr = {4, 1, 2,7, 5, 8, 3, 6};
    // quickSort(arr, 0, arr.size()-1);
    // for (int i=0;i<arr.size();i++){
    //     cout << arr[i] << " ";
    // }

    for (long long int i=0;i<1000000;i++){
        cout << i;
    }
}