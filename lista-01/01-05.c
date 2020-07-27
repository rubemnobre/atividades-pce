/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
497547
*/

#include<stdio.h>

int main(){
    float c, k;
    printf("Digite a temperatura em °C: ");
    scanf("%f", &c);
    k = c + 273.15;
    printf("A temperatura em K é: %.2f\n", k);
    return 0;
}