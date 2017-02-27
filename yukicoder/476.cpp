#include <iostream>
#include <math.h>
using namespace std;

#define Rop(i,N) for(int i=0;i<N;i++)

int main(void){
    long long N,A;
    long long x,sum = 0;

    cin >> N >> A;
    Rop(i,N){cin >> x; sum += x;}

    if(A * N == sum)cout << "YES" << endl;
    else cout << "NO" << endl;
    return (0);
}

/* int main(void){
    int n = 0;
    int a = 0;
    int i = 0;
    long long num = 0;
    int  *x;
    float fres = 0;
    long long lres = 0;

    
    cin >> n >> a;
    x = new int[n];
    for(i=0;i<n;i++){
        cin >> x[i];
        num += x[i];
    }
    fres = (float)num/(float)n;
    lres = (long long)(num/n);

    if(ceil(fres)!=floor(fres)){
            if(fres - a == 0){
                //cout << "YES\n";
                cout << "fres: " << fres << "\n" << "a: " << a << "\n" << "YES\n";
            }else{
                //cout << "NO\n";
                cout << "fres: " << fres << "\n" << "a: " << a << "\n" << "NO\n";
            }
    }else{
            if(lres == a){
                //cout << "YES\n";
                cout << "lres: " << lres << "\n" << "a: " << a << "\n" << "YES\n";
            }else{
                //cout << "NO\n";
                cout << "lres: " << lres << "\n" << "a: " << a << "\n" << "NO\n";
            }
    }

    return (0);
} */