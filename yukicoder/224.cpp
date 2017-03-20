#include <iostream>
using namespace std;

int main(){
    int n,cnt;
    string S,T;
    cin >> n >> S >> T;
    for(int i = 0; i < n; ++i){
        if(S[i]!=T[i]){cnt++;}
    }
    cout << cnt << endl;   
    return 0;
}