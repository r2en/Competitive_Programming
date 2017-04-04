#include <iostream>
using namespace std;

int main(){
    int cnt = 0;
    string S; cin >> S;
    for(int i = 0; i < S.size(); ++i){
        cout << S[i];
        if(S[i] == '…'){ cnt++; }
    }
    cout << cnt << endl;
    return 0;
}