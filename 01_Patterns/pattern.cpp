#include <iostream>
using namespace std;

#define n 5
void pattern1() {
    // *****
    // *****
    // *****
    // *****
    // *****
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2(){
    // *
    // **
    // ***
    // ****
    // *****
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3(){
    // 1
    // 12
    // 123
    // 1234
    // 12345
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++) {
            cout << j;
        }
        cout << endl;
    }
}


void pattern4() {
    // 1
    // 22
    // 333
    // 4444
    // 55555
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++) {
            cout << i;
        }
        cout << endl;
    }
}

void pattern5(){
    // *****
    // ****
    // ***
    // **
    // *
    for (int i=1;i<=n;i++){
        for (int j=i;j<=n;j++){
            cout << "*";
        }    
        cout << endl;
    }
}

void pattern6(){
    // 12345
    // 1234
    // 123
    // 12
    // 1
    for (int i=5;i>0;i--){
        for (int j=1;j<=i;j++){
            cout << j;
        }
        cout << endl;
    }
}

void pattern7(){
    //     *
    //    ***
    //   *****
    //  *******
    // *********
    for (int i=0;i<n;i++){
        for (int j=i;j<n-1;j++){
            cout << " ";
        }
        for (int j=0;j<=i*2;j++ )cout << "*";
        
        cout <<endl;
    }
}
int main() {

    pattern1();
    pattern2();
    pattern3();
    pattern4();
    pattern5();
    pattern6();
    pattern7();


}