#include <iostream>
using namespace std;

int main(){
    int a[5] = {};
    int cnt[13] = {};
    int cnt2 = 0;
    int cnt3 = 0;
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    for(int i = 0; i < 5; i++){
        if(1 == a[i]){ cnt[0]++;}
        if(2 == a[i]){ cnt[1]++;}
        if(3 == a[i]){ cnt[2]++;}
        if(4 == a[i]){ cnt[3]++;}
        if(5 == a[i]){ cnt[4]++;}
        if(6 == a[i]){ cnt[5]++;}
        if(7 == a[i]){ cnt[6]++;}
        if(8 == a[i]){ cnt[7]++;}
        if(9 == a[i]){ cnt[8]++;}
        if(10 == a[i]){ cnt[9]++;}
        if(11 == a[i]){ cnt[10]++;}
        if(12 == a[i]){ cnt[11]++;}
        if(13 == a[i]){ cnt[12]++;}
    }
    for(int i = 0; i < 13; i++){
        if(cnt[i]==2){ cnt2++; }
        if(cnt[i]==3){ cnt3++; }
    }
    if(cnt3 == 1 && cnt2 == 1){ cout << "FULL HOUSE\n"; }
    else if(cnt3 == 1){ cout << "THREE CARD\n"; }
    else if(cnt2 == 2){ cout << "TWO PAIR\n"; }
    else if(cnt2 == 1){ cout << "ONE PAIR\n"; }
    else{cout << "NO HAND\n"; }
    return 0;
}