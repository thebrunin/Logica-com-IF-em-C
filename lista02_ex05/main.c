#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 05\n\n");
    int a;
    printf("Insira um numero inteiro:");
    scanf("%d", &a);
    if(a%2==0){
        printf("%d", a+5);
    } else {
        printf("%d", a+8);
    }
}
