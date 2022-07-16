#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 08\n\n");
    char A;
    float compra, pagamento;
    printf("Opcoes de pagamento:\n\n");
    printf("a) A vista em dinheiro ou cheque, recebe 10%% de desconto\nb) A vista no cartao de credito, recebe 15%% de desconto\nc) Em duas vezes, preco normal de etiqueta sem juros\nd) Em duas vezes, preco normal de etiqueta mais juros de 10%% ");
    printf("\n\nEscolha a opcao de pagamento:");
    scanf("%c", &A);
    printf("Insira o valor da compra:");
    scanf("%f", &compra);
    if((A=='a')||(A=='A')){
        pagamento=compra-compra*0.1;
        printf("\nValor total R$%.2f", pagamento);
    }else if((A=='b')||(A=='B')){
        pagamento=compra-compra*0.15;
        printf("\nValor total R$%.2f", pagamento);
    }else if((A=='c')||(A=='C')){
        pagamento=compra;
        printf("\nValor total R$%.2f, em duas vezes de R$%.2f", pagamento, pagamento/2);
    }else if((A=='d')||(A=='D')){
        pagamento=compra+compra*0.1;
        printf("\nValor total R$%.2f, em duas vezes de R$%.2f", pagamento, pagamento/2);
    }
}
