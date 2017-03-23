#include <iostream>
using namespace std;

int main(){
    string A,B;
    int cnt = 0;
    cin >> A >> B;
    for(int i = 0; i < A.size(); ++i){
        for(int j = 0; j < B.size(); ++j){
            if(A[i] == B[j]){ A[i] = '*'; B[j] = '*'; }
        }
    }
    for(int i = 0; i < A.size(); ++i){
        if(A[i] == '*'){ cnt++; }
    }
    cout << ((A.size() == cnt) ? "YES\n" : "NO\n");
    return 0;
}