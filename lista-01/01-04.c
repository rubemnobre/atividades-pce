/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
497547
*/

#include<stdio.h>

int main(){
    float c, f;
    printf("Digite a temperatura em °C: ");
    scanf("%f", &c);
    f = 1.8*c + 32;
    printf("A temperatura em °F é: %f\n", f);
    return 0;
}