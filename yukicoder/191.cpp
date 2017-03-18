#include <iostream>
using namespace std;

int main(){
    int n;
    int dep = 0;
    long long c[100000] = {};
    long long sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> c[i]; sum += c[i];
    }
    for(int i = 0; i < n; i++){
        if(sum/10>=c[i]){ dep+=30; }
    }
    cout << dep << "\n";
    return 0;
}