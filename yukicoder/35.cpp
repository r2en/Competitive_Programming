#include<iostream>
using namespace std;

int main(){
    int A = 0; int B = 0; double good = 0; double bad = 0;
    int N = 0; int t = 0; string s;
    cin >> N;
    for(int i = 0; i < N; ++i){
        cin >> t >> s;
        A = t * 12;
        B = s.size() * 1000; //cout << A << " " << B << endl;
        if(A > B||A == B){ good += s.size(); }
        else if(A < B){ bad += s.size()-(12*t/1000); good += 12*t/1000; }
        //cout << good << " " << bad << endl;
    }
    cout << good << " " << bad << endl;
    return 0;
}