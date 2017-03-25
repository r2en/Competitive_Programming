#include <iostream>
using namespace std;

int main(){
    int aw = 0; int ab = 0;
    int bw = 0; int bb = 0;
    int c = 0; int d = 0;
    cin >> aw >> ab;
    cin >> bw >> bb;
    cin >> c >> d;
    aw -= (c>=ab?c-ab:0);
    bw += (c>=ab?c-ab:0);
    aw += (bw>=d?d:bw);
    cout << aw << endl;
    return 0;
}