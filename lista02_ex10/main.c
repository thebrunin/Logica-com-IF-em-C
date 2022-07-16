#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 10\n\n");
    int a, b;
    printf("Insira o valor a:");
    scanf("%d", &a);
    printf("Insira o valor b:");
    scanf("%d", &b);

    if(a>=b){
        printf("\nDiferenca a-b: %d", (a)-(b));
    }else{
        printf("\nDiferenca b-a: %d", (b)-(a));
    }
}
