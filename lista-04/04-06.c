/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    const int n = 4;
    int v[n][n];
    int im, jm, m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Digite o numero (%d, %d): ", i, j);
            scanf("%d", &v[i][j]);
            if((i == 0 && j == 0) || v[i][j] > m){
                m = v[i][j];
                im = i;
                jm = j;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == im && j == jm){
                printf("\033[0;92m%d\t\033[0m", v[i][j]);
            }else{
                printf("%d\t", v[i][j]);
            }
        }
        printf("\n");
    }
    printf("Posicao do maior: (%d, %d)\n", im, jm);
    return 0;
}