// Práctica 1 Movimientos de Torre y Alfil
#include <stdio.h>

int main(){

    char arr[8][8],x=0,y=0;

    for(x=0;x<8;x++)
        for(y=0;y<8;y++)
            arr[x][y]= 0;
     for(x=0;x<8;x++)
     {
        for(y=0;y<8;y++)
            printf(" %c",arr[x][y]);
        printf("\n");
     }
         return 0;
}