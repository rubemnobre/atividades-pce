/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
497547
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