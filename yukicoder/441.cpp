#include <iostream>
using namespace std;

int main(){
    string A,B;
    cin >> A >> B;
    if( ( A == "0" && B == "0" ) || ( A == "2" && B == "2" ) ){
        cout << "E" << endl;
    }else if( A == "0" || A == "1" || B == "0" || B == "1" ){
        cout << "S" << endl;
    }else{
        cout << "P" << endl;
    }
    return 0;
}