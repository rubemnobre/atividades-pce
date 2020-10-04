/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    int n, soma = 0;
    printf("digite o numero: ");
    scanf("%d", &n);
    while(n != 0){
        soma += n%10;
        n /= 10;
    }
    printf("%d\n", soma);
    return 0;
}