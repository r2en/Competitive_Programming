#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *add(Node**new,int no){
    Node *node = malloc(sizeof(Node));
    node->next = *new;
    *new = node;
    node->data = no;
    return node;
}

void print(Node *node){
    if(node == NULL){
        printf("NULL\n");
    }
    while(node != NULL){
        printf("%d\n",node->data);
        node = node->next;
    }
}

int main(void){
    int i = 0;
    int n = 0;
    Node *node = NULL;
    for(i = 0; i < 4; i++){
        scanf("%d",&n);
        add(&node,n);
    }
    print(node);
}