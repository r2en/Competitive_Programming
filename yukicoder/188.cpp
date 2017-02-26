#include <iostream>
using namespace std;

int calc(int x,int y){
    int sum = 0;
    sum = y/10 + y%10;
    if(x == sum){
        return 1;
    }
    return 0;
}

int main(void){
    int x,y;
    int count = 0;
    for(x=1;x<=12;x++){
        if(x==2){
            for(y=1;y<=29;y++){
                if(calc(x,y) == 1){count++;}
            }
        }else if(x==4 || x==6 || x==9 || x==11){
            for(y=1;y<=30;y++){
                if(calc(x,y) == 1){count++;}
            }
        }else{
            for(y=1;y<=31;y++){
                if(calc(x,y) == 1){count++;}
            }
        }
    }
    cout << count << "\n";
    return(0);
}