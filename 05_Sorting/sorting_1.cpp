#include <iostream>

using namespace std;


void printArray(int arr[], int n){
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void selection_sort(int arr[], int n){
    for (int i=0;i<n;i++){
        int min_index = i;
        int min=arr[min_index];

        for (int j=i;j<n;j++){
            if (arr[j] < min) {
                min = arr[j];
                min_index = j;
            }
        }

        if (min_index!=i){
            swap(arr[min_index], arr[i]);
            // cout << arr[min_index] << "swap" << arr[i] << endl;
        }
    }
    printArray(arr, n);
}

void bubble_sort(int arr[], int n){
    for (int i=0;i<n-1;i++){
        for (int j=i;j<n;j++) {
            if (arr[j] < arr[i]) swap(arr[i], arr[j]);
        }
    }
    printArray(arr,n);
}

void insertion_sort(int arr[], int n){
    for (int i=0;i<n;i++){
        int j=i;

        while (j>0 && arr[j-1] > arr[j]) {
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
    printArray(arr, n);
}

int main(){
    int arr[]= {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    // selection_sort(arr, n);
    // bubble_sort(arr, n);
    insertion_sort(arr, n);


    

}