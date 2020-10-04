/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    const int n = 5;
    int v[n][n];
    int val, iv, jv, found = 0;
    printf("Digite X: ");
    scanf("%d", &val);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Digite o numero (%d, %d): ", i, j);
            scanf("%d", &v[i][j]);
            if(v[i][j] == val){
                iv = i;
                jv = j;
                found = 1;
            }
        }
    }
    
    if(found){
        printf("Encontrado em: (%d, %d)\n", jv, iv);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == iv && j == jv){
                    printf("\033[0;33m%d\t\033[0m", v[i][j]);
                }else{
                    printf("%d\t", v[i][j]);
                }
            }
            printf("\n");
        }
    }else{
        printf("Nao encontrado\n");
    }
    return 0;
}