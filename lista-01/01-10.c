/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    float n_horas, val_hora, bruto, descontos = 0;
    printf("Quantas horas por mês: ");
    scanf("%f", &n_horas);
    printf("Valor da hora: ");
    scanf("%f", &val_hora);
    bruto = val_hora * n_horas;
    descontos += 0.11*bruto; //IR
    descontos += 0.08*bruto; //INSS
    descontos += 0.05*bruto; //Sindicato
    printf("+ Salário Bruto:   R$%.2f\n", bruto);
    printf("- IR:              R$%.2f\n", bruto*0.11);
    printf("- INSS:            R$%.2f\n", bruto*0.08);
    printf("- Sindicato:       R$%.2f\n", bruto*0.05);
    printf("+ Salário Líquido: R$%.2f\n", bruto - descontos);
    return 0;
}