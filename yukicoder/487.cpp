#include <iostream>
#include <math.h>
using namespace std;

int main(void){
    int i;
    long long m,x,y,prime = 2017;
    cin >> m;
    y = x = (prime * prime) % m;
    for(i=1;i<prime;i++){
        y = (y * x) % m;
    }
    cout << (y+prime)%m << "\n";
    return (0);
}