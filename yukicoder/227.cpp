#include <iostream>
using namespace std;

int main(){
    int a[5] = {};
    int cnt[5] = {};
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    for(int i = 0; i < 5; i++){
        if(a[0] == a[i]){ if(i!=0)cnt[0]++;}
        if(a[1] == a[i]){ if(i!=1)cnt[1]++;}
        if(a[2] == a[i]){ if(i!=2)cnt[2]++;}
        if(a[3] == a[i]){ if(i!=3)cnt[3]++;}
        if(a[4] == a[i]){ if(i!=4)cnt[4]++;}
    }
    for(int i = 0; i < 5; i++){
        if(cnt[i]!=0){cout << cnt[i];}
    }
    return 0;
}