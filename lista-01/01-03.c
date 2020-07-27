/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    float n, s = 0;
    printf("Digite o primeiro número: ");
    scanf("%f", &n);
    s += n;
    printf("Digite o segundo número: ");
    scanf("%f", &n);
    s += n;
    printf("Digite o terceiro número: ");
    scanf("%f", &n);
    s += n;
    printf("Soma: %f\n", s);
    return 0;
}