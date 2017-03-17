#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); ++i){
        if(97<=s[i]&&s[i]<=122){
            printf("%c",s[i]-32);
        }else if(65<=s[i]&&s[i]<=90){
            printf("%c",s[i]+32);
        }
    }
    cout << "\n";
    return 0;
}