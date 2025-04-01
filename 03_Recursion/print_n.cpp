#include <iostream>

using namespace std;

void print(int n){
    if (n<=0) return;
    print(n-1);
    cout << n << " ";
}

void print_name(int count, int total){

    if (count >= total) return;
    cout << "Daanveer" << endl;
    print_name(count+1, total);
}

int sum_n(int n){
    if (n<1) return 0;
    return n+ sum_n(n-1);
}

int main(){
    // print(10);
    // print_name(0, 5);
    cout << sum_n(6);
}