#include <iostream>
using namespace std;

int main(void){
    string S,A;
    long long sum = 0;
    long long N = 0;
    long long n = 0;
    long long num = 0;
    cin >> S;
    for(int i = 0; i<S.length(); i++){
        if((S[i] == '0') || (S[i] == '1') || (S[i] == '2') || (S[i] == '3') || (S[i] == '4') || (S[i] == '5') || (S[i] == '6') || (S[i] == '7') || (S[i] == '8') || (S[i] == '9')){
            A += S[i];    
        }
    }
    /*
    N = stoi(A);
    for(int i = 0; i<A.length();i++){
        n = N % 10;
        num += n;
        N /= 10;
    }
    cout << num << "\n";
    */
    return(0);
}