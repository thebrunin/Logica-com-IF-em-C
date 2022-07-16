#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 04\n\n");
    int a, b;
    printf("Insira dois valores:\n");
    printf("Valor A:");
    scanf("%d", &a);
    printf("Valor B:");
    scanf("%d", &b);
    if(a==b){
        printf("Soma: %d", a+b);
    } else {
        printf("Multiplicacao: %d", a*b);
    }
}
