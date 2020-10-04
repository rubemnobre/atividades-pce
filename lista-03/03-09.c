/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    float a = 1, b = 1, soma = 0;
    while (a != 101){
        soma += a/b;
        a += 2;
        b += 1;
    }
    printf("soma: %f\n", soma);
    return 0;
}