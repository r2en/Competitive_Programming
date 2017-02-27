#include <iostream>
#include <math.h>
using namespace std;

bool check(string S){
    int num = 0;
    try{
        num = stoi(S);
    }catch(const std::invalid_argument& e){
        return false;
    }
    if(num>12345){return false;}
    num = (int)log10((double)num) + 1;
    if(num > 0 && S.size() > num){
        return false;
    }else if(0 > num && S.size() > 1){
        return false;
    }
    return true;
}

int main(void){
    int i;
    string A,B;
    cin >> A >> B;
    if(check(A) == 1 && check(B) == 1){
        cout << "OK\n";
    }else{
        cout << "NG\n";
    }
    return 0;
}