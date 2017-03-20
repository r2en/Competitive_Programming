#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<double>vec;
    double S[6] = {};
    double sum = 0;
    for(int i = 0; i < 6; ++i){ cin >> S[i]; vec.push_back(S[i]); }
    sort(begin(vec),end(vec));
    for(int i  =1; i < 5; ++i){ sum+=vec[i]; }
    printf("%0.2f",sum/4); cout << "\n";
    return 0;
}