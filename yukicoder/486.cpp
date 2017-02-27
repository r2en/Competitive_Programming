#include <iostream>
using namespace std;

int main(void){
    int i = 0;
    int flag = 0;
    char s;
    char *str;
    str = new char[100];

    while(cin.get(s)){
        str[i] = s;
        if(str[i-2] == 'O' && str[i-1] == 'O' && str[i] == 'O'){cout << "East\n";flag = 1;break;}
        else if(str[i-2] == 'X' && str[i-1] == 'X' && str[i] == 'X'){cout << "West\n";flag = 1;break;}
        if(s == '\n')break;
        i++;
    }
    if(flag == 0){
        cout << "NA\n";
    }
    return (0);
}