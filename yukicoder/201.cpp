#include <iostream>
using namespace std;

int main(){
    string s1,s2;
    string p1,p2;
    long long pa,pb;
    char x1,x2;
    cin >> s1 >> p1 >> x1;
    cin >> s2 >> p2 >> x2;
    if(p1.length() > p2.length()){
        cout << s1;
    }else if(p1.length() < p2.length()){
        cout << s1;
    }else{
        pa = stoi(p1);
        pb = stoi(p2);
        if(pa==pb){
            cout << "-1";
        }else if(pa > pb){
            cout << s1;
        }else if(pa < pb){
            cout << s2;
        }
    }
    cout << "\n";
    return 0;
}