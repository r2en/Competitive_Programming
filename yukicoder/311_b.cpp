#include <iostream>
using namespace std;

int main(void){
    int count = 0;
    long long n = 0;
    cin >> n;
    long long ans = 0;
    ans = (n / 3 + n / 5) * 2;
    cout << ans <<"\n";
    return (0);
}