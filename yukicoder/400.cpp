#include <iostream>
using namespace std;

int swap(string s,int n){
    char tmp;
    for(int i = 0; i <= n/2; i++){
        tmp = s[n-i];
        s[n-i] = s[i];
        s[i] = tmp;
    }
    for(int i = 0; i <= n; i++){
        if(s[i] == '<'){
            cout << '>';
        }else if(s[i] == '>'){
            cout << '<';
        }
    }
    cout << "\n";
    return 0;
}

int main(void){
    string s;
    char tmp;
    cin >> s;
    int n = s.length();
    swap(s,n);
    return 0;
}