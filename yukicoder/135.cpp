#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;
using ll = long long;

int main(){
    ll N = 0; ll tmp = 0; ll mini = 1e9;
    cin >> N; vector<ll>X(N);
    for(int i = 0; i < N; ++i){ cin >> X[i]; }
    sort(X.begin(),X.end());
    X.erase(unique(X.begin(),X.end()),X.end());
    for(int i = 0; i < X.size(); ++i){ mini = min(mini, X[i+1]-X[i]); }
    cout << ( mini == 1e9 ? 0 : mini) << endl;
    return 0;
}