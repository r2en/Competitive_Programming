#include <iostream>
using namespace std;
using ll = long long;

int main(){
    ll N = 0; ll H = 0; ll M = 0; ll T = 0; ll TIME = 0;
    cin >> N >> H >> M >> T;
    TIME = H * 60 + M + T * (N-1);
    cout << TIME / 60 % 24 << endl;
    cout << TIME % 60 << endl;
    return 0;
}