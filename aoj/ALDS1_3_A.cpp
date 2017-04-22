#include <iostream>
using namespace std;

int top,s[1000];

void push(int x){
    s[++top] = x;
}

int pop(){
    top--;
    return s[top+1];
}

int main(){
    int a = 0; int b = 0;
    top = 0;
    char s[100];
    while(scanf("%s",s)!=EOF){
        if(s[0] == '+'){
            a = pop();  b = pop();
            push(a+b);
        }else if(s[0] == '-'){
            b = pop();  a = pop();
            push(a-b);
        }else if(s[0] == '*'){
            a = pop();  b = pop();
            push(a * b);
        }else{
            push(atoi(s));
        }
    }

    cout << pop() << endl;
    return 0;
}