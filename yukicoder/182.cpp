#include <iostream>
#include <map>
using namespace std;
int main(){
    int N; cin >> N; 
    int cnt = 0;
    int mmax = 0;
    int *m; m = new int[N];
    for(int i = 0; i < N; ++i){
        int a = 0; cin >> a; m[a]++;
        mmax = max(a,mmax);
    }
    for(int i = 0; i <= mmax; ++i){ if(m[i]==1){ cnt++; } }
    cout << cnt << endl; delete[] m;
    return 0;
}