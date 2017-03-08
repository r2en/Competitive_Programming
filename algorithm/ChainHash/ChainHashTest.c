#include <stdio.h>
#include "Member.h"
#include "ChainHash.h"

typedef enum{
    TERMINATE,ADD,DELETE,SEARCH,CLEAR,DUMP
}Menu;

Menu SelectMenu(void){
    int ch;
    do{
        printf("(1)Add (2)Delete (3)Search (4)AllClear (5)Dump (0)Terminate : ");
        scanf("%d",&ch);
    }while(ch < TERMINATE || ch > DUMP);
    return (Menu)ch;
}

int main(void){
    Menu menu;
    ChainHash hash;
    Initialize(&hash,13);
    do{
        int result;
        Member x;
        Node *temp;
        switch(menu = SelectMenu()){
            case ADD:
                x = ScanMember("add",MEMBER_NO | MEMBER_NAME);
                result = Add(&hash,&x);
                if(result)
                    printf("error:faile to add (%s).\n",(result == 1) ? "registered" : "low memory");
                break;
            case DELETE:
                x = ScanMember("Delete",MEMBER_NO);
                result = Remove(&hash,&x);
                if(result == 1)
                    printf("error: no exit a number.\n");
                break;
            case SEARCH:
                x = ScanMember("Search",MEMBER_NO);
                temp = Search(&hash,&x);
                if(temp == NULL)
                    printf("faile to search.\n");
                else{
                    printf("succeed in search : ");
                    PrintLnMember(&temp->data);
                }
                break;
            case CLEAR:
                Clear(&hash);
                break;
            case DUMP:
                Dump(&hash);
                break;
        }
    }while(menu != TERMINATE);
    Terminate(&hash);
    return 0;
}