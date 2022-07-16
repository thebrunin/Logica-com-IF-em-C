#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 06\n\n");
    int a, b, c, maior, menor, meio;
    printf("Insira tres valores inteiros e diferentes:");
    printf("\nPrimeiro valor:");
    scanf("%d", &a);
    printf("Segundo valor:");
    scanf("%d", &b);
    printf("Terceiro valor:");
    scanf("%d", &c);

    if(a>=b&&a>=c) {
        maior=a;
    }else if(b>=a&&b>=c) {
        maior=b;
    }else if(c>=a&&c>=b) {
        maior=c;
    }
    if(a<=b&&a<=c) {
        menor=a;
    }else if(b<=a&&b<=c) {
        menor=b;
    }else if(c<=a&&c<=b) {
        menor=c;
    }
    if((a!=maior)&&(a!=menor)) {
        meio=a;
    }else if((b!=maior)&&(b!=menor)) {
        meio=b;
    }else if((c!=maior)&&(c!=menor)) {
        meio=c;
    }
    printf("Ordem decressente: %d, %d, %d", maior, meio, menor);
}
