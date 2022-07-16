#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 16\n\n");
    int saldoM;
    float credito;
    printf("Insira o saldo medio:");
    scanf("%d", &saldoM);
    if(saldoM<=200){
        printf("#LAMENTO#\nVoce nao tem direito ao credito especial.");
    }else if(saldoM<=400){
        credito=0.2;
    }else if(saldoM<=600){
        credito=0.3;
    }else if(saldoM>600){
        credito=0.4;
    }
    if(saldoM>200){
        printf("\nCom o saldo medio de %d, o valor do seu credito especial equivale a R$%.2f.", saldoM, saldoM*credito);
    }
}
