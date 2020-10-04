/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    const int n = 10;
    int v[n];
    int i;
    for(int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }
    int maior = v[0], menor = v[0];
    for(int i = 1; i < n; i++){
        if(v[i] > maior)
            maior = v[i];
        if(v[i] < menor)
            menor = v[i];
    }
    printf("Maior: %d\nMenor: %d\n", maior, menor);
    return 0;
}