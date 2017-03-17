#include <iostream>
using namespace std;

int top,S[1000];

void push(int x){
    S[++top] = x;
}

int pop(){
    top--;
    return S[top+1];
}

int main(){
    int a,b;
    top = 0;
    char S[100];
    
}