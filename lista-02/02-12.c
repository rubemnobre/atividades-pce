/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    float a, b, c;
    printf("Digite os valores de a, b e c: \n");
    scanf("%f", &a);
    if(a <= 0){
        printf("Lado inválido!\n");
        return 1;
    }
    scanf("%f", &b);
    if(b <= 0){
        printf("Lado inválido!\n");
        return 1;
    }
    scanf("%f", &c);
    if(c <= 0){
        printf("Lado inválido!\n");
        return 1;
    }
    if(a<b+c && b<a+c && c<a+b)
        if(a == b && b == c)
            printf("Equilátero\n");
        else
            if(a == b || a == c || c == b)
                printf("Isósceles\n");
            else
                printf("Escaleno\n"); 
    else
        printf("Não é triângulo\n");
    return 0;
}