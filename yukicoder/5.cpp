#include <iostream>
#include <algorithm>
using namespace std;
int main(void){
    long long l = 0;
    cin >> l;
    int n;
    cin >> n;
    long long *w;
    w = new long long[n];
    for(int i = 0; i < n; ++i){cin >> w[i];}

    long long cnt = 0;
    long long sum = 0;
    sort(w,w+n);

    for(int i = 0; i < n; ++i){
        sum += w[i];
        if(sum>l){break;}
        cnt++;
    }
    cout << cnt << "\n";
    return 0;
}