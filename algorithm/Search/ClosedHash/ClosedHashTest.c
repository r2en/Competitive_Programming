#include <stdio.h>
#include "Member.h"
#include "ClosedHash.h"

typedef enum{
    TERMINATE,ADD,DELETE,SEARCH,CLEAR,DUMP
}Menu;

Menu SelectMenu(void){
    int ch;
    do{
        printf("(1)Add (2)Delete (3)Search (4)AllDelete (5)Dump (0)Finish:");
        scanf("%d",&ch);
    }while(ch <TERMINATE || ch > DUMP);
    return (Menu)ch;
}

int main(void){
    Menu menu;
    ClosedHash hash;
    Initialize(&hash,13);
    do{
        int result;
        Member x;
        Bucket *temp;
        switch(menu = SelectMenu()){
            case ADD:
                x = ScanMember("Add",MEMBER_NO | MEMBER_NAME);
                result = Add(&hash,&x);
                if(result)
                    printf("[error]:failed addition(%s)\n",(result == 1) ? "registered" : "lack a memory");
                    break;
            case DELETE:
                x = ScanMember("Delete",MEMBER_NO);
                result = Remove(&hash,&x);
                if(result == 1)
                    printf("[error]:no exit this number\n");
                break;
            case SEARCH:
                x = ScanMember("Search",MEMBER_NO);
                temp = Search(&hash,&x);
                if(temp == NULL)
                    printf("faile a search\n");
                else{
                    printf("succeed a search\n");
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