#include <iostream>
using namespace std;

int main(void){
    long long h = 0;
    long long w = 0;
    cin >> h >> w;
    if(h*3==w*4){
        cout << "TATE\n";
    }else{
        cout << "YOKO\n";
    }
    return 0;
}