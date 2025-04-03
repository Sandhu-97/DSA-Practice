#include <iostream>

using namespace std;




void print_fibonacci(int i, int first, int second){
    if (i<0) return;
    cout << first << endl;
    // cout << i << endl;
    print_fibonacci(i-1, second, first+second);

}


void fibonacci(int i){
    print_fibonacci(i, 0, 1);
}


int main(){
    fibonacci(10);
}