/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>
int main(){
    int a = 1, b = 1, c = 1, n, i;
    printf("digite n: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("%d\n", b);
        c = a;
        a = a+b;
        b = c;
    }
    return 0;
}