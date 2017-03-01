#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int n;
    int *A;
    cin >> n;
    A = new int[n];
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    sort(A,A+n);
    if(n%2!=0){
        cout << A[n/2] << endl;
    }else{
        cout << (float)(A[n/2-1] + A[n/2])/2 << endl;
    }
    return(0);
}