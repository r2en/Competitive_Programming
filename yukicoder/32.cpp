#include <iostream>
using namespace std;

int main(void){
    long long S = 0;
    long long L = 0;
    long long M = 0;
    long long N = 0;
    cin >> L >> M >> N;
    if(N/25>=0){
        M += (N / 25);
        N = N % 25;
    }
    if(M/4>=0){
        L += (M / 4);
        M = M % 4;
    }
    if(L/10>=0){
        S += (L / 10);
        L = L % 10;
    }
    cout << L + M + N << "\n";
    return 0;
}