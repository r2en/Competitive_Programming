#include <iostream>
using namespace std;

int main(){
    int N;
    int cnt = 0;
    long long x[1000];
    long long y[1000];
    long long z[1000];
    long long crct;
    scanf("%d",&N);

    for(int i = 0; i < N; i++){
        cin >> x[i] >> y[i];
        z[i] = y[i] - x[i];
    }
    crct = z[0];
    for(int i = 0; i < N; i++){
        if(crct == z[i])cnt++;
    }
    if(N==1)cout << "-1\n";
    if(cnt==N&&crct>0) cout << z[0] << "\n";
    else cout << "-1\n";
    return 0;
}