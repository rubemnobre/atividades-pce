/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    const int n = 15;
    float v[n];
    int i;
    for(int i = 0; i < n; i++){
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &v[i]);
    }
    float media = 0;
    for(int i = 0; i < n; i++){
        media += v[i]/n;
    }
    printf("Media: %f\n", media);
    return 0;
}