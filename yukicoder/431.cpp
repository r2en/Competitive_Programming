#include <iostream>
using namespace std;
int main(){
    int A,B,C,S;
    cin >> A >> B >> C >> S;
    if(S == 1)
        cout << "SURVIVED\n";
    else
        if(A + B + C >= 2 ? cout << "DEAD\n" : cout << "SURVIVED\n")
    return 0;
}