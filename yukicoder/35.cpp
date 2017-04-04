#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    double T = 0; string S;
    cin >> N;
    for(int i = 0; i < N; ++i){
        cin >> T >> S;
        int size = S.size();
        printf("%d\n",size - T * 12 / 1000);
    }

    return 0;
}