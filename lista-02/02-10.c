/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    float val;
    printf("Digite o valor antigo: ");
    scanf("%f", &val);
    if(val > 100)
        val *= 1.15;
    if(val <= 100 && val > 50)
        val *= 1.10;
    if(val <= 50)
        val *= 1.05;
    printf("O novo valor é R$%.2f\n", val);
    return 0;
}