#include <iostream>
#include <vector>


using namespace std;

void printVector(vector<int> arr){

    for (int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void rotateArrayBruteForce(vector<int> arr){
    if (arr.size() < 2) return;

    vector<int> temp(arr.size());
    temp[arr.size()-1] = arr[0];
    for (int i=0;i<arr.size()-1;i++){
        temp[i] = arr[i+1];
    }
    printVector(temp);
}

void rotateArrayOptimal(vector<int>& arr){
    if (arr.size()<2) return;
    int first_elem = arr[0];

    for (int i=0;i<arr.size()-1;i++) arr[i] = arr[i+1];
    arr[arr.size()-1] = first_elem;
    printVector(arr);

}


int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8};
    // rotateArrayBruteForce(arr);
    rotateArrayOptimal(arr);
}