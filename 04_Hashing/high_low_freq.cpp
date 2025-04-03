#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;


void max_min_freq(vector<int> arr){
    unordered_map<int, int> map;
    int highest = INT_MIN;
    int highest_element=0;
    int lowest = INT_MAX;
    int lowest_element=0;
    for (int i: arr) map[i]++;
    // for (auto it: map) cout << it.first << endl;
    for (auto it: map){
        // cout << it.second << endl;
        if (it.second > highest){
            highest = it.second;
            highest_element = it.first;
        }
        if (it.second < lowest){
            lowest = it.second;
            lowest_element =  it.first;
        }
    }

    cout << highest_element << " " << lowest_element;
}


int main(){
    vector<int> arr=  {2,2,3,4,4,2};
    max_min_freq(arr);
}