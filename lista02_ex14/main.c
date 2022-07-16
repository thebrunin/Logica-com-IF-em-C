#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 14\n\n");
    int carYear;
    float fip;
    printf("Insira o ano do carro:");
    scanf("%d", &carYear);
    printf("Insira o valor ta tabela:");
    scanf("%f", &fip);
    if(carYear<1990){
        printf("Juros R$%.2f", fip*0.01);
    }else {
        printf("Juros R$%.2f", fip*0.015);
    }
}
