/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    float deg, rad;
    printf("Digite o ângulo em graus: ");
    scanf("%f", &deg);
    rad = deg * 3.141593 / 180;
    printf("O ângulo em radianos é: %f\n", rad);
    return 0;
}