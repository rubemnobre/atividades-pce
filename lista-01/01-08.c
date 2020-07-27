/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    int n, s;
    printf("Digite o Número: ");
    scanf("%d", &n);
    s = n*(n+1)/2;
    printf("A soma de 1 a n é: %d\n", s);
    return 0;
}