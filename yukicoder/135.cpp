#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N; scanf("%d",&N);
    vector<int>X(N);
    for(int i = 0; i < N; ++i){ scanf("%d",&X[i]); }
    sort(X.begin(),X.end());
    X.erase(unique(X.begin(),X.end()),X.end());
    int res = 1e9;
    for(int i = 0; i < X.size() - 1; ++i){
        res = min(res,X[i+1]-X[i]);
    }
    cout << (res == 1e9 ? 0 : res) << endl;
    return 0;
}