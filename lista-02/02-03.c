/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    int a;
    printf("Digite o numero: ");
    scanf("%d", &a);
    printf("O numero %d é ", a);
    printf(a%2?"impar\n":"par\n"); 
    return 0;
}