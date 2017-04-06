#include <iostream>
using namespace std;

int main(){
    string s[2];
    cin >> s[0];
    s[1] = (s[0] == "oda" ? "yukiko" : "oda" );
    int cnt = 0;
    for(int i = 0; i < 8; ++i){
        string t; cin >> t;
        cnt += count(t.begin(),t.end(),'w') + count(t.begin(),t.end(),'b');
    }
    cout << s[cnt%2] << endl;
}