#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 4\n\n");
    int n;
    printf("Isira um numero inteiro:");
    scanf("%d", &n);
    if(n>=0){
        printf("Dobro: %d", n*2);
    }else{
        printf("Triplo: %d", n*3);
    }
}
