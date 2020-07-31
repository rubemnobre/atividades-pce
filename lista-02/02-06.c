/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    int d;
    printf("Digite o numero de um dia (1-7): ");
    scanf("%d", &d);
    switch(d){
        case 1: 
            printf("domingo");
            break;
        case 2: 
            printf("segunda");
            break;
        case 3: 
            printf("terça");
            break;
        case 4: 
            printf("quarta");
            break;
        case 5: 
            printf("quinta");
            break;
        case 6: 
            printf("sexta");
            break;
        case 7: 
            printf("sabado");
            break;
        default:
            printf("Haha nope");
    }
    printf("\n");
    return 0;
}