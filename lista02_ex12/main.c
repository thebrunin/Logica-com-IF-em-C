#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 12\n\n");
    float x, y, z;
    printf("Insira o primeiro lado:");
    scanf("%f", &x);
    printf("Insira o segundo lado:");
    scanf("%f", &y);
    printf("Insira o terceiro lado:");
    scanf("%f", &z);
    int a=0, b=0, c=0;
    if(x<(y+z)){
        a= a+1;
    }
    if((y-z)<x){
        a++;
    }

    if(y<(x+z)){
        b= b+1;
    }
    if((x-z)<y){
        b++;
    }

    if(z<(x+y)){
        c= c+1;
    }
    if((x-y)<z){
        c++;
    }
    if((a+(b+c))==6){
        printf("\nTriangulo validado!");
        if((x==y)&&(x==z)){
            printf(" E Equilatero!");
        } else if((x==y||(x==z))||(y==z)) {
            printf(" E Isosceles!");
        } else if((x!=y)&&(x!=z)){
            printf(" E Escaleno!");
        }
    } else {
        printf("\nTriangulo invalido!");
    }

}

