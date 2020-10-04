/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    int cnt = 1, n;
    float soma = 0;
    printf("digite n: ");
    scanf("%d", &n);
    while(cnt <= n){
        soma += 1/(float)cnt;
        cnt++;
    }
    printf("H(%d) = %f\n", n, soma);
    return 0;
}