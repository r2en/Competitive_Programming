#include <iostream>
using namespace std;

int main(){
    int N; cin >> N;
    int sum = 0;
    int h1 = 0; int h2 = 0;
    int m1 = 0; int m2 = 0;
    for(int i = 0; i < N; ++i){
        scanf("%d:%d %d:%d",&h1,&m1,&h2,&m2);
        sum+=(h1<h2?(h2*60+m1)-(h1*60+m1):((h2+24)*60+m2)-(h1*60+m1));
        cout << sum << endl;
    }
    cout << sum << endl;
    return 0;
}