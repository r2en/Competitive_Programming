#include <iostream>
using namespace std;

int main(void){
    int i,res;
    int num[10];
    for(i=0;i<9;i++){
        cin >> num[i];
        if(num[i] != i+1){ res = i + 1; break;}
        else{res = 10;}
    }
    cout << res;
    cout << "\n";
    return (0);
}