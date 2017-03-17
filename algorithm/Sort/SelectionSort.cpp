#include <iostream>
using namespace std;

void trace(int A[],int N){
    int i;
    for(i = 0; i < N; ++i){
        if(i > 0)printf(" ");
        printf("%d",A[i]);
    }
    printf("\n");
}

int selectionSort(int A[],int N){
    int tmp,sw = 0,min;
    int cnt = 0;
    for(int i = 0; i < N; ++i){
        min = i;
        for(int j = i; j < N; j++){
            if(A[min] > A[j]) min = j;
        }
        tmp = A[i]; A[i] = A[min]; A[min] =tmp;
        trace(A,N);
        if(i != min)cnt++;
    }
    return cnt;
}

int main(){
    int A[100],N,sw;

    scanf("%d",&N);
    for(int i = 0; i < N; ++i) scanf("%d",&A[i]);

    sw = selectionSort(A,N);

    for(int i = 0; i < N; ++i){
        if(i > 0)printf(" ");
        printf("%d",A[i]);
    }
    cout << endl;
    cout << sw << "\n";
    return 0;
}