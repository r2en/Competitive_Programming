#include <iostream>
using namespace std;

int main(){
    int a,b,c,d; string s;
    int N; cin >> N; int res = 0; int ans = 0;
    int yes[10] = {}; int no[10] = {};
    for(int i = 0; i < N; ++i){
        scanf("%d %d %d %d",&a,&b,&c,&d); cin >> s;
        if(s=="YES"){ yes[a]+=1; yes[b]+=1; yes[c]+=1; yes[d]+=1; }
        else if(s=="NO"){ no[a]+=1; no[b]+=1; no[c]+=1; no[d]+=1; }
    }
    for(int i = 0; i < 10; ++i){ if(no[i]==0&&res<=yes[i]){ ans = i; res = yes[i]; } }
    cout << ans << endl;
    return 0;
}