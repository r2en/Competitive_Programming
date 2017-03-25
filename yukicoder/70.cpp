#include <iostream>
using namespace std;

int main(){
    int res = 0;
    int n,h1,m1,h2,m2,e1,e2;
    scanf("%d",&n);
    for(int i = 0; i < n; ++i){
        scanf("%d:%d %d:%d",&h1,&m1,&h2,&m2);
        (h2+24)-(h1+24)
         e2 = ((h2+24)*60+m2);
         e1 = ((h1+24)*60+m1);
         cout << e2 << e1 << endl;
    }
    printf("res:%d\n",res);
    return 0;
}