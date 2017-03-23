#include <iostream>
using namespace std;

int main(){
    string sa,sb,pa,pb,xa,xb; int cnt = 0;
    cin >> sa >> pa >> xa >> sb >> pb >> xb;
    if(pa.size() > pb.size()){ cout << sa << endl; }
    else if(pa.size() < pb.size()){ cout << sb << endl; }
    else if(pa.size() == pb.size()){
        for(int i = 0; i < pa.size(); ++i){ 
            if(pa[i] < pb[i]){ cout << sb << endl; break; }
            else if(pa[i] > pb[i]){ cout << sa << endl; break; }
            else if(pa[i] == pb[i]){ cnt++; if(pa.size() == cnt){ cout << -1 << endl; break; }}
         }
    }
    return 0;
}