#include <iostream>
using namespace std;

int main(void){
    long long a = 0;
    long long b = 0;
    long long c = 0;
    long long d = 0;
    cin >> a >> b >> c >> d;
    cout << a % d * b % d * c % d << "\n"; 
    return(0);
}