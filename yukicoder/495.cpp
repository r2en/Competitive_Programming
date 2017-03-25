#include <iostream>
using namespace std;

int main(){
    int right = 0; int left = 0;
    string s; cin >> s;
    for(int i = 1; i < s.size(); i+=5 ){ (s[i]=='*' ? right++ : left++ ); }
    cout << left << " " << right << endl;
    return 0;
}