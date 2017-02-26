#include <iostream>
using namespace std;

int main(void){
    float a,b;
    cin >> a >> b;
    if(b/a - int(b/a)!= 0){
        cout << "NO\n";
    }else{
        cout << b/a << "\n";
    }
    return (0); 
}