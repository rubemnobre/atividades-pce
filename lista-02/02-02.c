/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>
#include<math.h>

int main(){
    float e;
    start:
    printf("Digite o numero: ");
    scanf("%f", &e);
    if(e >= 0){
        printf("O quadrado é %f e a raiz é %f\n", e*e, sqrt(e));
    }else{
        printf("O numero é inválido. Digite um número positivo!\n");
        goto start;
    }
    return 0;
}