#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string N;
    cin >> N;
    sort(N.rbegin(),N.rend());
    cout << N << endl;
    return 0;
}