#include <iostream>
using namespace std;

int main(){
    long long w = 0;
    long long d = 0;
    long long sum = 0;
    cin >> w >> d;
    while(d-1){
        w -= w/(d*d);
        d--;
    }
    cout << w << "\n";
    return 0;
}