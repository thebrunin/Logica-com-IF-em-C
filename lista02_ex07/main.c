#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 07\n\n");
    int sexo;
    float altura;
    printf("Qual seu sexo?");
    printf("\nInsira 1 para homem:\nInsira 2 para mulher:\n");
    scanf("%d", &sexo);
    printf("Insira sua altura:");
    scanf("%f", &altura);
    if((sexo!=1)&&(sexo!=2)) {
       printf("\nVoce deve inserir 1 para Homem, ou 2 para mulher");
    }else if(sexo==1) {
       printf("Peso ideal = %.2f", (72.7*altura)-58);
    }else if(sexo==2) {
       printf("Peso ideal = %.2f", (62.1*altura)-44.7);
    }
}
