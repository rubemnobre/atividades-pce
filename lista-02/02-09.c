/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    int cod, qt;
    float val;
    printf("Digite o codigo do item: ");
    scanf("%d", &cod);
    switch(cod){
        case 100: val = 1.2; break;
        case 101: val = 1.3; break;
        case 102: val = 1.5; break;
        case 103: val = 2.2; break;
        case 104: val = 1.0; break;
        default:
            printf("Código invalido\n");
            return 1;
    }
    printf("Digite a quantidade: ");
    scanf("%d", &qt);
    printf("Total: R$%.2f\n", val*qt);
    return 0;
}