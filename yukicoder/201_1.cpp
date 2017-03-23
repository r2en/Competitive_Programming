#include <iostream>
using namespace std;

string solve(string sa,string sb,string pa,string pb){
    if(pa.size()<pb.size()){ return sb; }
    else if(pa.size()>pb.size()){ return sa; }
    else{ for(int i = 0; i < pa.size(); ++i){ return((pa[i]<pb[i]) ? sb : sa); }}
    return "-1";
}

int main(){
    string sa,sb,pa,pb,xa,xb;
    cin >> sa >> pa >> xa;
    cin >> sb >> pb >> xb;
    cout << solve(sa,sb,pa,pb) << endl;
    return 0;
}