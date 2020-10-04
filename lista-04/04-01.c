/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    const int n = 10;
    float v[n];
    int i;
    for(int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%f", &v[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%f, ", v[n-1-i]);
    }
    printf("\n");
    return 0;
}