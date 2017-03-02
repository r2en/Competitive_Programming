#include <iostream>
using namespace std;

int main(void){
    int n;
    int sum = 0;
    long long v = 0;
    int *A;
    cin >> n;
    A = new int[n];
    for(int i=0;i<n;i++){
        cin >> A[i];
        sum += A[i];
    }
    cin >> v;
    cout << sum - v << endl;
    return(0);
}