#include <stdio.h>

int main(void){
    char num[11][5][5] = {
        {{' ',' ',' ',' ',' '},
         {' ',' ',' ',' ',' '},
         {' ',' ',' ',' ',' '},
         {' ',' ',' ',' ',' '},
         {' ',' ',' ',' ',' '}},
        {{'*','*','*','*','*'},
         {'*',' ',' ',' ','*'},
         {'*',' ',' ',' ','*'},
         {'*',' ',' ',' ','*'},
         {'*','*','*','*','*'}},
        {{' ',' ',' ',' ','*'},
         {' ',' ',' ',' ','*'},
         {' ',' ',' ',' ','*'},
         {' ',' ',' ',' ','*'},
         {' ',' ',' ',' ','*'}},
        {{'*','*','*','*','*'},
         {' ',' ',' ',' ','*'},
         {'*','*','*','*','*'},
         {'*',' ',' ',' ',' '},
         {'*','*','*','*','*'}},
        {{'*','*','*','*','*'},
         {' ',' ',' ',' ','*'},
         {'*','*','*','*','*'},
         {' ',' ',' ',' ','*'},
         {'*','*','*','*','*'}},
        {{'*',' ',' ',' ','*'},
         {'*',' ',' ',' ','*'},
         {'*','*','*','*','*'},
         {' ',' ',' ',' ','*'},
         {' ',' ',' ',' ','*'}},
        {{'*','*','*','*','*'},
         {'*',' ',' ',' ',' '},
         {'*','*','*','*','*'},
         {' ',' ',' ',' ','*'},
         {'*','*','*','*','*'}},
        {{'*',' ',' ',' ',' '},
         {'*',' ',' ',' ',' '},
         {'*','*','*','*','*'},
         {'*',' ',' ',' ','*'},
         {'*','*','*','*','*'}},
        {{'*','*','*','*','*'},
         {' ',' ',' ',' ','*'},
         {' ',' ',' ',' ','*'},
         {' ',' ',' ',' ','*'},
         {' ',' ',' ',' ','*'}},
        {{'*','*','*','*','*'},
         {'*',' ',' ',' ','*'},
         {'*','*','*','*','*'},
         {'*',' ',' ',' ','*'},
         {'*','*','*','*','*'}},
        {{'*','*','*','*','*'},
         {'*',' ',' ',' ','*'},
         {'*','*','*','*','*'},
         {' ',' ',' ',' ','*'},
         {' ',' ',' ',' ','*'}}};
    char data[4];
    scanf("%s", data);
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            for (int k = 0; k < 5; k++){
                printf("%c", num[(data[j]-'0')+1][i][k]);   
            }
            printf(" "); 
        }
        printf("\n");
    }
}