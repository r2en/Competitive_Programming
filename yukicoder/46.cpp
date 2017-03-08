#include <iostream>
using namespace std;

int main(void){
    long long a = 0;
    long long b = 0;
    cin >> a >> b;
    if(b%a!=0){
        cout << b/a+1 << "\n";
    }else{
        cout << b/a << "\n";
    }
    return 0;
}