#include <iostream>
#include <vector>



using namespace std;

void second_largest_smallest(vector<int> arr){
    int largest = -1;
    int second_largest = -1;

    int smallest = 100;
    int second_smallest = 100;

    if(arr.size()<2){
        cout << "-1" << endl;

        return;
    }

    for (int i: arr){
        if (i>largest) {
            second_largest =largest;
            largest=i;
        }
        if (i>second_largest && largest!=i) {
            second_largest=i;
        }

        if (i<smallest) {
            second_smallest = smallest;
            smallest=i;
        }
        if (i<second_smallest && smallest!=i) second_smallest = i;




    }
    cout << second_largest << " " << second_smallest;

}

int main(){
    vector<int> arr = {1,2,4,7,7,5};
    second_largest_smallest(arr);
}