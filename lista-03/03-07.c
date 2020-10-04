/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    
    while(1){
        int opc;
        float a, b;
        printf("operação: ");
        scanf("%d", &opc);
        if(opc == 5){
            return 0;
        }
        printf("a: ");
        scanf("%f", &a);
        printf("b: ");
        scanf("%f", &b);
        switch(opc){
            case 1:
                a = a+b;
                break;
            case 2:
                a = a-b;
                break;
            case 3:
                a = a*b;
                break;
            case 4:
                a = a/b;
                break;
            default:
                printf("try again\n");
        }
        printf("%f\n", a);
    }
    return 0;
}