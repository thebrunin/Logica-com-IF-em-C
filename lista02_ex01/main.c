#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 01\n\n");
    float a, b;
    printf("Insira dois valores:\n");
    printf("Valor A:");
    scanf("%f", &a);
    printf("Valor B:");
    scanf("%f", &b);
    if (a==b) {
        printf("Os dois valores sao iguais e eu nao caio nessa");
    } else if(a>b) {
        printf("O maior dos valores eh o A");
    } else if(b>a) {
        printf("O maior dos valores eh o B");
    }
}
