#include <iostream> 
#include <cmath>
#include <vector>


using namespace std;

vector<int> divisors(int n){
    vector<int> arr;

    for (int i=1;i<=n;i++){
        if (n%i==0)
        arr.push_back(i);
    }
as
    return arr;
}


int main(){

    vector<int> ans = divisors(64);
    for (int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
}