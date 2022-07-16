#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 13\n\n");
    int valor, cem, cinq, vin, dez, cin, um, resto;
    printf("Insira um valor em dinheiro:");
    scanf("%d", &valor);
    cem = valor/100;
    valor = valor%100;
    cinq = valor/50;
    valor = valor%50;
    vin = valor/20;
    valor = valor%20;
    dez = valor/10;
    valor = valor%10;
    cin = valor/5;
    valor = valor%5;
    um = valor/1;

    printf("PODEMOS ALCANCAR ESTE VALOR COM:\n");
    printf("Notas de cem: %d", cem);
    printf("\nNotas de cinquenta: %d", cinq);
    printf("\nNotas de vinte: %d", vin);
    printf("\nNotas de dez: %d", dez);
    printf("\nNotas de cinco: %d", cin);
    printf("\nNotas de um: %d", um);
}
