#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int main(){
    ll N = 0;
    cin >> N;
    while(N>0){
        N >>= 1;
        cout << N << " ";
    }
    cout << endl;
    return 0;
}