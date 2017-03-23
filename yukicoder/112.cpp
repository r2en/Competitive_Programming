// ??

#include <iostream>
using namespace std;

int main(){
    int N = 0; int A = 0;
    int t = 0; int c = 0;
    cin >> N;
    for(int i = 0; i < N; ++i){
        cin >> A;
        if(A % 4 == 0){ t++; }
        else if(A % 2 == 0){ c++; }
    }
    cout << c << " " << t << endl;
    return 0;
}