#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int>vec;
    for(int i = 0; i < N; ++i){
        int a; cin >> a;
        vec[a]++;
    }
    const_iterator itEnd = vec.end();
    for(const_iterator it = vec.begin(); it != itEnd; ++it){
        cout << *it << "\n";
    }
    return 0;
}