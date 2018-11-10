#include <iostream>
#include <stdlib.h>

int main()
{
    int a = 15;
    int b = 15;

    int mayor = 0;
    int menor = 0;

    int r = 1000;
    int q;

    if(a>b){
        mayor = a;
        menor = b;
    }else{
        mayor = b;
        menor = a;
    }

    while(r!=0){
        r = mayor % menor;
        mayor = menor;
        menor = r;
    }

    printf("MCD: %d", mayor);
}