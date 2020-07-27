/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    int saque, nota50, nota10, nota5, nota1;
    printf("Valor do Saque: ");
    scanf("%d", &saque);
    nota50 = saque/50;
    saque %= 50;
    nota10 = saque/10;
    saque %= 10;
    nota5 = saque/5;
    saque %= 5;
    nota1 = saque;
    printf("Nota50: %d\nNota10: %d\nNota5: %d\nNota1: %d\n", nota50, nota10, nota5, nota1);
    return 0;
}