#include <iostream>
using namespace std;

#define n 5
void pattern1()
{
    // *****
    // *****
    // *****
    // *****
    // *****
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2()
{
    // *
    // **
    // ***
    // ****
    // *****
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3()
{
    // 1
    // 12
    // 123
    // 1234
    // 12345
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern4()
{
    // 1
    // 22
    // 333
    // 4444
    // 55555
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void pattern5()
{
    // *****
    // ****
    // ***
    // **
    // *
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern6()
{
    // 12345
    // 1234
    // 123
    // 12
    // 1
    for (int i = 5; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern7()
{
    //     *
    //    ***
    //   *****
    //  *******
    // *********
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i * 2; j++)
            cout << "*";

        cout << endl;
    }
}

void pattern8()
{
    // *********
    //  *******
    //   *****
    //    ***
    //     *
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = (2 * n - 1) - 2 * i; j > 0; j--)
            cout << "*";
        cout << endl;
    }
}

void pattern9(){
    //     *
    //    ***
    //   *****
    //  *******
    // *********
    // *********
    //  *******
    //   *****
    //    ***
    //     *
    pattern7();
    pattern8();
}

void pattern10(){
    // *
    // **
    // ***
    // ****
    // *****
    // ****
    // ***
    // **
    // *
    for (int i=0;i<2*n-1;i++){
        if (i<5)
            for (int j=0;j<=i;j++) cout << "*";
        if (i>=5){
            for (int j=0;j<2*n-i-1;j++) cout << "*";
        }
        cout << endl;
    }
}

void pattern11(){

    // 1 
    // 0 1 
    // 1 0 1 
    // 0 1 0 1 
    // 1 0 1 0 1 
    for (int i=1;i<=n;i++){
        int print = 1;
        if (i%2==0) print=0;
        for (int j=1;j<=i;j++){
            cout << print << " ";  
            print = 1 - print;
        } 
        cout << endl;
    }
}

void pattern12(){
    // 1      1
    // 12    21
    // 123  321
    // 12344321
    for (int i=1;i<=4;i++){
        for (int j=1;j<=i;j++){
            cout << j;
        }
        for (int j=1;j<2*(n-i)-1;j++) cout << " ";
        for (int j=i;j>0;j--) cout << j;
        cout << endl;
    }
}

void pattern13(){

    // 1 
    // 2 3 
    // 4 5 6 
    // 7 8 9 10 
    // 11 12 13 14 15 
    int start=1;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout << start << " ";
            start++;
        }
        cout << endl;
    }
}

void pattern14(){

    // A
    // AB
    // ABC
    // ABCD
    // ABCDE
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout << (char)('A'+j);
        }
        cout <<endl;
    }
}

void pattern15(){

    // ABCDE
    // ABCD
    // ABC
    // AB
    // A
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i;j++){
            cout << (char)('A'+j);
        }
        cout <<endl;
    }
}

void pattern16(){
    // A
    // BB
    // CCC
    // DDDD
    // EEEEE
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout << (char)('A'+i);
        }
        cout <<endl;
    }
}

void pattern17() {

    //     A
    //    ABA
    //   ABCBA
    //  ABCDCBA
    // ABCDEDCBA
    for (int i=0;i<n;i++){
        for (int j=i;j<n-1;j++) cout << " ";
        for (int j=0;j<=i;j++){
            cout << (char) ('A'+j);
        }
        for (char j='A'+i-1;j>='A';j--) cout << j;
        cout << endl;
    }
}

void pattern18(){
    // E 
    // D E 
    // C D E 
    // B C D E 
    // A B C D E 
    for (int i=0;i<n;i++){
        for (char j = 'E'-i;j<='E';j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern19(){
    // **********
    // ****  ****
    // ***    ***
    // **      **
    // *        *
    // *        *
    // **      **
    // ***    ***
    // ****  ****
    // **********
    for (int i=1;i<=2*n;i++){
        if (i<=5){
            for (int j=0;j<=n-i;j++) cout << "*";
            for (int j=0;j<2*(i-1);j++) cout << " ";
            for (int j=0;j<=n-i;j++) cout << "*";
        }

        if (i>5){
            for (int j=0;j<i-n;j++){
                cout <<"*";
            }
            for (int j=0;j<(2*n-i)*2;j++) cout << " ";
            for (int j=0;j<i-n;j++){
                cout <<"*";
            }
        }
        cout << endl;
    }
}

void pattern20(){
    // *        *
    // **      **
    // ***    ***
    // ****  ****
    // **********
    // ****  ****
    // ***    ***
    // **      **
    // *        *
    for (int i=1;i<=2*n-1;i++){
        if (i<=5){
            for (int j=0;j<i;j++) cout << "*";
            for (int j=0;j<2*(n-i);j++) cout << " ";
            for (int j=0;j<i;j++) cout << "*";
        }
        else {
            for (int j=0;j<2*n-i;j++) cout << "*";
            for (int j=0;j<2*(i-n);j++) cout << " ";
            for (int j=0;j<2*n-i;j++) cout << "*";
        }
        cout << endl;
    }
}

void pattern21(){
    // *****
    // *   *
    // *   *
    // *   *
    // *****
    for (int i=0;i<n;i++){
        if (i==0 || i==n-1) for (int j=0;j<n;j++) cout << "*";
        else {
            cout << "*";
            for (int j=0;j<n-2;j++) cout << " ";
            cout << "*";
        }

        cout << endl;
    }
}

void pattern22(){
    // 4444444
    // 4333334
    // 4322234
    // 4321234
    // 4322234
    // 4333334
    // 4444444
    for (int i=0;i<2*n-1;i++){
        for (int j=0;j<2*n-1;j++){
            int left = j;
            int top = i;
            int right = (2*n-2) - j;
            int bottom = (2*n-2) - i;
            cout << n-min(min(left, right), min(top, bottom));
        }
        cout << endl;
    }
}
int main()
{

    pattern1();
    pattern2();
    pattern3();
    pattern4();
    pattern5();
    pattern6();
    pattern7();
    pattern8();
    pattern9();
    pattern10();
    pattern11();
    pattern12();
    pattern13();
    pattern14();
    pattern15();
    pattern16();
    pattern17();
    pattern18();
    pattern19();
    pattern20();
    pattern21();
    pattern22();
}