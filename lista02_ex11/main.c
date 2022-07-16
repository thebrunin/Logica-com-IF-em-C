#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 11\n\n");
    int nivel, horasAula;
    printf("Insira o nivel do professor:");
    scanf("%d", &nivel);
    printf("Insira as horas aula trabalhadas:");
    scanf("%d", &horasAula);
    switch(nivel){
        case 1:
            printf("Salario: R$%.2f", horasAula*12.00);
            break;
        case 2:
            printf("Salario: R$%.2f", horasAula*17.00);
            break;
        case 3:
            printf("Salario: R$%.2f", horasAula*25.00);
            break;
        default:
            printf("Nivel incorreto");
            break;
    }

}
