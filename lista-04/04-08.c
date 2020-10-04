/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    const int n = 3;
    int v[n][n];
    int soma = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Digite o numero (%d, %d): ", i, j);
            scanf("%d", &v[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i < j){
                printf("\033[0;33m%d\t\033[0m", v[i][j]);
                soma += v[i][j];
            }else{
                printf("%d\t", v[i][j]);
            }
        }
        printf("\n");
    }
    printf("Soma: %d", soma);
    return 0;
}