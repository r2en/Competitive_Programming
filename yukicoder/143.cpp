#include <iostream>
using namespace std;

int main(){
    int k = 0;
    int n = 0;
    int f = 0;
    int a[100];
    scanf("%d %d %d",&k,&n,&f);
    int sum = 0;
    sum = k * n;
    for(int i = 0; i < f; i++){
        scanf("%d",&a[i]);
        sum -=a[i];
    }
    if(sum<0){cout << "-1\n";}
    else{cout << sum << "\n";}
    return 0;
}