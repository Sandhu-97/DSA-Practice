#include <iostream>
#include <vector>
#include <set>
using namespace std;


int removeDuplicates(vector<int>& arr){
    int i=1;

    for (int j=1;j<arr.size();j++){
        if (arr[j] != arr[i-1]) arr[i++] = arr[j]; 
    }
    return i;
    

}
void printVector(vector<int> arr){

    for (int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;

}
int main(){
    vector<int> arr = {1,1,2,2,2,3,3};
    cout << removeDuplicates(arr)<<endl;
    printVector(arr);
}