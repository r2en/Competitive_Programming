#include <iostream>
using namespace std;

int main(){
    int a1 = 0; int b1 = 0; int c1 = 0;
    int a2 = 0; int b2 = 0; int c2 = 0;
    int res1 = 0; int res2 = 0; 
    scanf("%d.%d.%d",&a1,&b1,&c1);
    scanf("%d.%d.%d",&a2,&b2,&c2);
    res1 = a1*10000000+b1*1000+c1;
    res2 = a2*10000000+b2*1000+c2;
    if(res1>res2||res1==res2){ cout << "YES\n"; }
    else{ cout << "NO\n"; }
    return 0;
}