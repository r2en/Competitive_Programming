#include <iostream>
using namespace std;

int main(){
    string S; cin >> S;
    for(int i = 0; i < S.size(); ++i){
        if(S[i]=='?'){
            switch (i){
                case 0: cout <<  "y" << endl; break;
                case 1: cout <<  "u" << endl; break;
                case 2: cout <<  "k" << endl; break;
                case 3: cout <<  "i" << endl; break;
                case 4: cout <<  "c" << endl; break;
                case 5: cout <<  "o" << endl; break;
                case 6: cout <<  "d" << endl; break;
                case 7: cout <<  "e" << endl; break;
                case 8: cout <<  "r" << endl; break;
            }
        }
    }
    return 0;
}