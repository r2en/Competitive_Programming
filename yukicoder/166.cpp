#include <iostream>
using namespace std;
using ll = long long;

 int main(){
    ll h = 0; ll w = 0;
    ll n = 0; ll k = 0;
    cin >> h >> w >> n >> k;
    cout << (h*w%n==k%n?"YES\n":"NO\n");
     return 0;
 }