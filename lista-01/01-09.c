/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
*/

#include<stdio.h>

int main(){
    float b, h, a;
    printf("Base: ");
    scanf("%f", &b);
    printf("Altura: ");
    scanf("%f", &h);
    a = b*h/2;
    printf("A área do triângulo é: %f\n", a);
    return 0;
}