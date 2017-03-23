#include <iostream>
using namespace std;
int main(){
    string S;
    int tcnt = 0; int rcnt = 0; int ecnt = 0;
    cin >> S;
    for(int i = 0; i < S.size(); ++i){
        if(S[i] == 't'){ tcnt++; }
        else if(S[i] == 'r'){ rcnt++;  }
        else if(S[i] == 'e'){ ecnt++; }
    }
    cout << min(tcnt,min(rcnt,(ecnt/2))) << endl;
    return 0;
}