#include <iostream>
#include <string>
using namespace std;

int main(){
    int t,u;
    string s;
    cin >> s >> t >> u;
    s[t] = '#'; s[u] = '#';
    for(int i = 0; i < s.size(); ++i){
        if(s[i]!='#')cout << s[i];
    }
    cout << endl;
    return 0;  
}