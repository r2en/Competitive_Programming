#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using P = pair<int, int>;

int main() {
    int N;
    cin >> N;
    int res = 0;
    for(int i=0; i<N; ++i) {
        int h1, m1, h2, m2;
        scanf("%d:%d %d:%d", &h1, &m1, &h2, &m2);
        res += (m2-m1+60)%60;
        res += ((h2-h1+24-(m2<m1))%24) * 60;
        cout << res << endl;
    }
    cout << res << endl;
}