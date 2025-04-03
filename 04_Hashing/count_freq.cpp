#include <iostream>
#include <unordered_map>


using namespace std;

unordered_map<int, int> freq(int arr[]){
    int size=6;
    unordered_map<int, int> result;
    for (int i=0;i<size;i++){
        result[arr[i]]++;
    }

    for(auto it: result){
        cout << it.first << " " << it.second << endl;
    }
    return result;
}


int main(){
    int arr[] = {2,2,3,4,4,2};
    freq(arr);
    

}