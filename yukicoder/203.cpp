#include <iostream>
using namespace std;

int main(){
    int cnt = 0;
    int tmp = 0;
    string s;
    for(int i = 0; i < 14; ++i){
        cin >> s[i];
        if(s[i]=='o'){ tmp = max(++cnt,tmp); }
        else if(s[i]=='x'){ cnt = 0; }
    }
    cout << tmp << "\n";
    return 0;
}