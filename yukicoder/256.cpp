#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n = 0;
    long long m = 0;
    long long cnt = 0;
    vector<long long>vec;
    vector<long long>::iterator ip;
    long long data[10] = {};
    scanf("%lld",&n);
    while(n){
        m = n % 10; data[cnt] = m;
        n/=10; cnt++;
    }
    for(int i = 0; i < cnt; i++){ vec.push_back(data[i]); }
    sort(vec.begin(),vec.end(),greater<long long>());
    ip = vec.begin();
    while(ip != vec.end()){ cout << *ip; ip++;}
    cout << "\n";
    return 0;
}