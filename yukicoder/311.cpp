#include <iostream>
using namespace std;

int main(void){
    int count = 0;
    long long n = 0;
    cin >> n;
    string N;
    for(int i = 1; i <= n; i++){
        if(i%3 == 0 && i%5 == 0){
            N += "fizzbuzz";
        }else if(i%3 == 0){
            N += "fizz";
        }else if(i%5 == 0){
            N += "buzz";
        }else{
            N += to_string(i);
        }
    }
    for(int i = 0; i < N.length(); i++){
        if(N[i]=='z'){
            count++;
        }
    }
    cout << count <<"\n";
    return (0);
}