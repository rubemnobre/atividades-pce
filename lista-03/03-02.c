/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    int cnt = 10;
    float soma = 0;
    while(cnt > 0){
        printf("digite um valor: ");
        float a;
        scanf("%f",&a);
        soma += a;
        cnt--;
    }
    printf("media: %f\n",soma/10);
    return 0;
}