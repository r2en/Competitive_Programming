#include <iostream>
using namespace std;

int main(void){
    string s;
    cin >> s;
    long long sum = 0;
    for(int i = 0; i < s.length(); ++i){
        if(s[i] == '0'){sum+=0;}
        if(s[i] == '1'){sum+=1;}
        if(s[i] == '2'){sum+=2;}
        if(s[i] == '3'){sum+=3;}
        if(s[i] == '4'){sum+=4;}
        if(s[i] == '5'){sum+=5;}
        if(s[i] == '6'){sum+=6;}
        if(s[i] == '7'){sum+=7;}
        if(s[i] == '8'){sum+=8;}
        if(s[i] == '9'){sum+=9;}
    }
    cout << sum << "\n";
    return 0;
}