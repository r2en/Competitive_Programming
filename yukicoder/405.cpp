#include <iostream>
#include <vector>
using namespace std;

int main(){
    int T = 0;
    string S;
    char R[12][5] = {
        "I","II","III","IIII","V","VI","VII","VIII","IX","X","XI","XII"
    };
    cin >> S >> T;
    for(int i = 0; i < 12; ++i){
        if(S==R[i]){ cout << i+1+T << " " << R[i+T] << endl; }
    }
    /*cin >> S >> t;
    ( t>=0 ? s - t % 24 : s + t % 24);
    (t % 24)*/
    /* 双方向リストのほうがいいな */
    return 0;
}