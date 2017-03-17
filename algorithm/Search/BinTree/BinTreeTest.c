#include <stdio.h>
#include "Member.h"
#include "BinTree.h"

typedef enum{
    TERMINATE,ADD,REMOVE,SEARCH,PRINT
}Menu;

Menu SelectMenu(void){
    int ch;
    do{
        printf("\n(1)add: (2)delete: (3)search: (4)show: (0)finish: ");
        scanf("%d",&ch);
    }while(ch < TERMINATE || ch > PRINT);
    return (Menu)ch;
}

int main(void){
    Menu menu;
    BinNode *root = NULL;
    do{
        Member x;
        BinNode *temp;
        switch(menu = SelectMenu()){
            case ADD:
                x = ScanMember("add",MEMBER_NO | MEMBER_NAME);
                root = Add(root,&x);
                break;
            case REMOVE:
                x = ScanMember("delete",MEMBER_NO);
                Remove(&root,&x);
                break;
            case SEARCH:
                x = ScanMember("searh",MEMBER_NO);
                if((temp = Search(root,&x)) != NULL)
                    PrintLnMember(&temp->data);
                break;
            case PRINT:
                printf("[All Node]");
                PrintTree(root);
                break;
        }
    }while(menu != TERMINATE);
    FreeTree(root);
    return 0;
}