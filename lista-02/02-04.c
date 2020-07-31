/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    float s, p;
    printf("Digite o valor do salário: ");
    scanf("%f", &s);
    printf("Digite o valor da prestação: ");
    scanf("%f", &p);
    if(p > 0.2*s)
        printf("Empréstimo não concedido.\n");
    else
        printf("Empréstimo concedido.\n");
    return 0;
}