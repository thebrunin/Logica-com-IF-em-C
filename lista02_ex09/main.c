#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 09\n\n");
    int id;
    float nota1, nota2, nota3, media;
    printf("VERIFICACAO DE ALUNOS APROVADOS\n\n");
    printf("Insira o RA:");
    scanf("%d", &id);
    printf("Insira a primeira nota:");
    scanf("%f", &nota1);
    printf("Insira a segunda nota:");
    scanf("%f", &nota2);
    printf("Insira a terceira nota:");
    scanf("%f", &nota3);
    media=(nota1+nota2+nota3)/3;
    if(media>=60){
        printf("\nAluno RA:%d APROVADO\n\nMedia final: %.2f", id, media);
    }else if(media<60&&media>=40){
        printf("\nAluno RA:%d em RECUPERACAO\nMedia atual:%.2f", id, media);
    }else if(media<40){
        printf("\nAluno RA:%d REPROVADO\n\nMedia final: %.2f", id, media);
    }
}
