/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    int n, fat = 1, cnt = 2;
    printf("digite o numero: ");
    scanf("%d", &n);
    while(cnt <= n){
        fat *= cnt;
        cnt++;
    }
    printf("%d! = %d\n", n, fat);
    return 0;
}