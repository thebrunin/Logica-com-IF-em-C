#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 15\n\n");
    printf("|CODIGO|----|  CARGO   |----|PERCENTUAL|**\n");
    printf("| 101  |----|Gerente   |----|  10%%     |**\n");
    printf("| 102  |----|Engenheiro|----|  20%%     |**\n");
    printf("| 103  |----|Tecnico   |----|  30%%     |**\n");
    float salario, percent;
    int cargo;
    printf("Insira o codigo do seu cargo:");
    scanf("%d", &cargo);
    printf("Insira seu salario:");
    scanf("%f", &salario);
    switch (cargo) {
        case 101:
            percent = 0.1;
            break;
        case 102:
            percent = 0.2;
            break;
        case 103:
            percent = 0.3;
            break;
        default:
            percent = 0.4;
            break;
    }
    printf("\nSalario antigo R$%.2f.", salario);
    printf("\nSalario atualizado R$%.2f.", salario+(salario*percent));
    printf("\nDiferenca R$%.2f.", (salario+(salario*percent))-salario);
    printf("\nAumento de %.0f%%.", percent*100);
}
