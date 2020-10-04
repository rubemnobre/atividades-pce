/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    const int n = 5;
    int v[n];
    int i, soma = 0, produto = 1;
    for(int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
        soma += v[i];
        produto *= v[i];
    }
    printf("Soma: %d\nProduto: %d\nValores: ", soma, produto);
    for(int i = 0; i < n; i++){
        printf("%d, ", v[i]);
    }
    printf("\n");
    return 0;
}