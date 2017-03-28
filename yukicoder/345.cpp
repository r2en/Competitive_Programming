#include <iostream>
using namespace std;

int check(string S){
    int mi = S.size() + 1;
    for(int i = 0; i < S.size(); ++i){
        if(S[i]=='c'){
            int w = 0;
            for(int j = i; j < S.size(); ++j){
                if(S[j] == 'w'){
                    w++;
                }
                if(w == 2){
                    mi = min(mi,j - i + 1);
                    break;
                }
            }
        }
    }
    if(mi == S.size()+1) mi = -1;
    return mi;
}

int main(){
    string S; cin >> S;
    cout << check(S) << endl;
    return 0;
}