#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(){
    int q,x;
    char com[20];
    list<int>V;
    scanf("%d",&q);
    for(int i = 0; i < q; ++i){
        scanf("%s",com);
        if(com[0]=='i'){ 
            scanf("%d",&x);
            V.push_front(x);
        }else if(com[6] == 'L'){
            V.pop_back();
        }else if(com[6] == 'F'){
            V.pop_front();
        }else if(com[0] == 'd'){
            scanf("%d",&x);
            for(list<int>::iterator it = V.begin(); it != V.end(); it++){
                if( *it == x){
                    V.erase(it);
                    break;
                }
            }
        }
    }
    int i = 0;
    for(list<int>::iterator it = V.begin(); it != V.end(); it++ ){
        printf(" ");
        printf("%d",*it);
    }
    printf("\n");
    return 0;
}