#include <iostream>
using namespace std;

int main(){
    int w = 0; int b = 0;
    string s; string t; string r;
    cin >> r;
    for(int i = 0; i < 8; ++i){
        cin >> s;
        for(int j = 0; j < s.size(); ++j){
            if(s[j]=='w'){ w++; }
            else if(s[j]=='b'){ b++; }
        }
    }
    if(r == "oda" ){ t = "yukiko"; }
    if(r == "yukiko" ){ t = "oda"; }
    cout << ((w+b)%2==0 ? r : t ) << endl;
    return 0;
}