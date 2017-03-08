/*
calclation amount 
(O)
<-- (1) -- (logn) -- (n) -- (nlogn) -- (n^2) -- (n^3) -- (n^k) -- (2^n) -->  
small                                                                   big
*/

/* SequentialSearch is O(n) ... (n/2)*/
#include <stdio.h>
#include <stdlib.h>

int search(const int a[],int n,int key){
    int i = 0;
    for(i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
    }
    return -1;
}

int main(void){
    int i,nx,ky,idx;
    int *x;

    printf("SequentialSearch\n");
    printf("Elements : ");
    scanf("%d",&nx);
    x = calloc(nx,sizeof(int));

    for(i=0;i<nx;i++){
        printf("x[%d] : ",i);
        scanf("%d",&x[i]);
    }
    printf("Search a value : ");
    scanf("%d",&ky);
    
    idx = search(x,nx,ky);
    if(idx == -1){
        printf("failed a search\n");
    }else{
        printf("%d is x[%d].\n",ky,idx);
    }
    free(x);
    return 0;
}