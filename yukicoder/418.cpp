#include <iostream>
using namespace std;

int main(){
    string s; cin >> s; int cnt = 0;
    for(int i = 0; i < s.size(); ++i){
        if(s[i]=='m'&&s[i+1]=='i'){
            for(int j = i+2; j < s.size(); ++j){
                if(s[j]=='n'){ cnt++;break;}
            }
        }
    }
    cout << cnt << endl;
    return 0;
}