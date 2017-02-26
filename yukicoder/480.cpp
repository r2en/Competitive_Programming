#include <iostream>
using namespace std;

int main(void){
    int n,i;
    int num = 0;
    cin >> n;
    for(i=1;i<=n;i++){
        num += i;
    }
    cout << num << "\n";
    return (0);
}