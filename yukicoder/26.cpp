#include <iostream>
using namespace std;

int main(){
    int n,m,p,q;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> p >> q;
        if(q==n){n = p;}
        else if(p==n){n = q;}
    }
    cout << n << "\n";
    return 0;
}