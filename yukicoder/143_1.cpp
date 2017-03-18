#include <iostream>
using namespace std;

int main(){
    int k,n,f,sum;
    int a[100];
    scanf("%d %d %d",&k,&n,&f);
    sum = k * n;
    for(int i = 0; i < f; i++){
        scanf("%d",&a[i]);
        sum -=a[i];
    }
    cout << max(-1,sum) << endl;
    return 0;
}