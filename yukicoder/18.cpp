#include <iostream>
using namespace std;

int main(){
    int res,sub;
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        res = s[i]-(i+1)%26;
        if('A'<=res){
            printf("%c",res);
        }else if('A'>res){
            sub = 'A'-res;
            printf("%c",'['-sub);
        }
    }
    cout << "\n";
    return 0;
}