#include <iostream>
#include <sstream>
using namespace std;

template <typename T> std::string tostr(const T& t)
{
    std::ostringstream os; os<<t; return os.str();
}

int main(void){
    long long A = 0;
    long long B = 0;
    cin >> A >> B;
    for(long long i = A;i<=B;i++){
        string s = tostr(i);
        if(i%3==0){
            cout << i << "\n";
        }else if((int)s.find('3')!=-1){
            cout << s << "\n";
        }
    }
    return 0;
}