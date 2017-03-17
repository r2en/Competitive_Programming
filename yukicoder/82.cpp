#include <iostream>
using namespace std;

int main(){
    int w,h;
    char c,d;
    cin >> w >> h >> c;
    for(int i = 0; i < h; ++i){
        if(c=='B'){d = (i%2!=0?'W':'B');}
        else if(c=='W'){d = (i%2!=0?'B':'W');}
        for(int j = 0; j < w; ++j){
            if(d == 'B'){cout << (j%2==0?"B":"W");}
            else if(d == 'W'){cout << (j%2==0?"W":"B");}
        }
        cout << "\n";
    }
    return 0;
}