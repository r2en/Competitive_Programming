#include <iostream>
using namespace std;
#define LEN 100005

typedef struct pp{
    char name[1000];
    int t;
}P;

P Q[LEN];
int head,tail,n;

void enqueue(P x){
    Q[tail] = x;
    tail = (tail + 1) % LEN;
}

P dequeue(){
    Q[tail] = x;
    tail = (tail + 1) % LEN;
    return x;
}

int main(){
    int elaps = 0,c;
    int i,q;
    P u;
    scanf("%d %d",&n,&q);

    for(int i = 1; i <= n; ++i){
        scanf("%s",Q[i].name);
        scanf("%d",&Q[i].t);
    }
    head = 1; tail = n + 1;

    while(head != tail){
        u = dequeue();
        c = min(q,u.t);
        u.t -= c;
        elaps += c;
        if(u.t > 0){ enqueue(u); }
        else{ printf("%s %d\n",u.name,elaps); }
    }
    return 0;
}
