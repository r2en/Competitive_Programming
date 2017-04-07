#include <iostream>
using namespace std;

int main(){
    int l,k,num; scanf("%d %d",&l,&k);
    if(l%(k*2)!=0){ num = l/(k*2); cout << num * k << endl; }
    else{ num = l/(k*2); cout << (num - 1) * k << endl; }
    return 0;
}