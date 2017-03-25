#include <iostream>
using namespace std;

int main(){
    double K = 0;
    double S = 0;
    cin >> K >> S;
    cout << (int)(S / ( 100 - K ) * 100) << endl;
    return 0;
}