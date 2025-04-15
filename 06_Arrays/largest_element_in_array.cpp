#include <iostream>
#include <vector>

using namespace std;

int largest_element(vector<int> arr){
    int largest = arr[0];
    for (int i: arr) if (i>largest) largest = i;
    return largest;
}



int main(){
    vector<int> arr = {8,10,5,7,9};
    cout << largest_element(arr);
}