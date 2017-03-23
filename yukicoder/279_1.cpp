#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
using ll = long long;

int func(string S,char c){
    return count(S.begin(),S.end(),c);
}

int main(){
    string S;
    cin >> S;
    cout << min(func(S,'t'),min(func(S,'r'),func(S,'e')/2)) << endl;
    return 0;
}