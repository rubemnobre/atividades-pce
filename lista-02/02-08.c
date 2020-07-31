/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    float p, h, i;
    printf("Peso: ");
    scanf("%f", &p);
    printf("Altura: ");
    scanf("%f", &h);
    i = p/(h*h);
    //fiz assim só por pra ficar mais fácil de digitar os intervalos
    float up = 18.5, low = 0;
    printf("%.1f -> ", i);
    if(i < up && i >= low)
        printf("Abaixo do peso.\n");
    low = up;
    up = 25;
    if(i < up && i >= low)
        printf("Saudável.\n");
    low = up;
    up = 30;
    if(i < up && i >= low)
        printf("Excesso de Peso.\n");
    low = up;
    up = 35;
    if(i < up && i >= low)
        printf("Obesidade grau 1.\n");
    low = up;
    up = 40;
    if(i < up && i >= low)
        printf("Obesidade grau 2 - severa.\n");
    low = up;
    up = 10000;
    if(i < up && i >= low)
        printf("Obesidade grau 2 - mórbida.\n");
    return 0;
}