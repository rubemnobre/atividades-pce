/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    char s;
    float h;
    printf("Qual é seu sexo (F/M)? ");
    scanf("%c", &s);
    printf("Qual é sua altura (m)? ");
    scanf("%f", &h);
    printf("Seu peso ideal é: %f\n", s=='M'?(72.7*h)-58:((62.1*h)-44.7));
    return 0;
}