#include <iostream>
using namespace std;

int main(void){
    int count = 0;
    long long n = 0;
    cin >> n;
    long long ans = 0;
    for(int i = 1; i <= n; i++){
        if(i%3 == 0 && i%5 == 0){
            ans += 4;
        }else if(i%3 == 0){
            ans += 2;
        }else if(i%5 == 0){
            ans += 2;
        }else{
        }
    }
    cout << ans <<"\n";
    return (0);
}