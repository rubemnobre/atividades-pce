/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    const int n = 20;
    int v[n];
    int i, n_par = 0, n_impar = 0;
    for(i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
        v[i] % 2 ? n_impar++ : n_par++;
    }
    printf("%d\n", n_par);
    int par[n_par], impar[n_impar];
    int j = n_par, k = n_impar;
    for(i = 0; i < n; i++){
        if(v[i] % 2 == 0){
            j--;
            par[j] = v[i];
        }else{
            k--;
            impar[k] = v[i]; 
        }
    }
    printf("Entrada: ");
    for(i = 0; i < n; i++){
        printf("%d, ", v[i]);
    }
    printf("\nPares: ");
    for(i = 0; i < n_par; i++){
        printf("%d, ", par[i]);
    }
    printf("\nImpares: ");
    for(i = 0; i < n_impar; i++){
        printf("%d, ", impar[i]);
    }
    printf("\n");
    return 0;
}