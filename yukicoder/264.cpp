#include <iostream>
using namespace std;

int main(void){
    int n,k;
    cin >> n >> k;
    if(n == k){
        cout << "Drew\n";
    }else if( (n == 2 && k == 0) || (n == 0 && k == 1) || (n == 1 && k == 2)){
        cout << "Won\n";
    }else{
        cout << "Lost\n";
    }
    return(0);
}