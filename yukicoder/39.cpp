#include <iostream>
#include <sstream>
#include <cstdlib>
using namespace std;

int main(){
    string s;
    int data[10] = {};
    int num,m,big;
    long long n = 0;
    cin >> s; num = s.size(); n = stoi(s);
    for(int i = 0; i < s.size(); i++){
        m = n % 10; 
        big = max(m,big);
        data[i] = m;
        n/=10;
    }
    cout << big;
    for(int i = 0; i < s.size(); i++){
        cout << data[num--];
    }
    cout << "\n";
    return 0;
}