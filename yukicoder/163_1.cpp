#include <iostream>
#include <cstdio>
using namespace std;

int main(void){
    string s; cin >> s;
    for(int i = 0; i < s.size(); ++i){
        if(s[i]>='A'&&s[i]<='Z')s[i]+=32;
        else s[i]-=32;
    }
    cout << s << endl;
}