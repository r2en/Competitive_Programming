#include <iostream>
using namespace std;

int main(void){
    long long n = 0;
    long long m = 0;
    cin >> n >> m;
    if((n/1000)/m>=0){
        cout << (n/1000)/m*1000 << "\n";
    }else{
        cout << "0\n";
    }
    return 0;
}