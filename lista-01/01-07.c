/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
497547
*/

#include<stdio.h>

int main(){
    float n, s = 0, m;
    printf("Digite o primeiro número: ");
    scanf("%f", &n);
    s += n;
    printf("Digite o segundo número: ");
    scanf("%f", &n);
    s += n;
    printf("Digite o terceiro número: ");
    scanf("%f", &n);
    s += n;
    printf("Digite o quarto número: ");
    scanf("%f", &n);
    s += n;
    m = s/4;
    printf("Média: %f\n", m);
    return 0;
}