#include <iostream>
using namespace std;

int main(){
    char A[10];
    char B[10];
    cin >> A >> B;
    for(int i = 0; i < 10; ++i){
        for(int j = 0; j < 10; ++j){
            if(B[j]=='*')continue;
            if(A[i]==B[j]){ B[j] = '*'; cout << B[j];}
        }
    }
    return 0;
}