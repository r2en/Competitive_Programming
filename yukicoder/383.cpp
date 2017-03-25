#include <iostream>
#include <string>
using namespace std;

int main(){
    int a = 0; int b = 0; cin >> a >> b;
    cout << ( a==b ? "0" : (a<b) ? "+" + to_string(b-a) : "-" + to_string(a-b) ) << endl;
    return 0;
}