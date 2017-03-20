#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <numeric>
using namespace std;

int main(){
    double S[6] = {};
    for(int i = 0; i < 6; ++i){ cin >> S[i]; }
    sort(begin(S),end(S));
    cout << fixed << setprecision(2) << accumulate(begin(S)+1,end(S)-1,0.0) / 4.0 << endl;
    return 0;
}