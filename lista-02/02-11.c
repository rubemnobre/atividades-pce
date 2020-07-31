/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    int humano, i;
    float cachorro = 0;
    printf("Digite a idade de humano: ");
    scanf("%d", &humano);
    if(humano <= 0){
        printf("Idade invalida!\n");
        return 1;
    }
    cachorro = humano < 2 ? 10.5 : (humano-2)*4 + 21;
    
    printf("A idade de cachorro é: %.1f\n", cachorro);
    return 0;
}