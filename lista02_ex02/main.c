#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 02\n\n");
    int a;
    printf("Insira um numero inteiro:");
    scanf("%d", &a);
    if(a%2==0){
        printf("O numero %d eh par", a);
    } else {
        printf("O numero %d eh impar", a);
    }
}
