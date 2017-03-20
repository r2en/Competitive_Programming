#include <iostream>
using namespace std;

int main(){
    int m = 0;
    int ans = 0;
    int N = 0;
    int cnt[6] = {};
    int L;
    cin >> N;
    for(int i = 0; i < N; ++i){
        cin >> L;
        cnt[L]++;
    }
    for(int i = 0; i < 6; ++i){
        if(m<=cnt[i]){
            m = max(cnt[i],m);
            ans = i;
        }
    }
    cout << ans << "\n";
    return 0;
}