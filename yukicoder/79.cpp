#include <iostream>
using namespace std;

int main(){
    int m = 0;
    int ans = 0;
    int N = 0;
    int cnt[6] = {};
    int L[100000] = {};
    cin >> N;
    for(int i = 0; i < N; ++i){
        cin >> L[i];
        if(L[i]==1){cnt[0]++;}
        if(L[i]==2){cnt[1]++;} 
        if(L[i]==3){cnt[2]++;} 
        if(L[i]==4){cnt[3]++;} 
        if(L[i]==5){cnt[4]++;} 
        if(L[i]==6){cnt[5]++;}
    }
    for(int i = 0; i < 6; ++i){
        if(m<=cnt[i]){
            m = max(cnt[i],m);
            ans = i;
        }
    }
    cout << ans+1 << "\n";
    return 0;
}