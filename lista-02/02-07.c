/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c;
    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);
    if(!a){
        printf("a deve ser diferente de 0\n");
        return 1;
    }
    float delta = b*b - 4*a*c;
    if(delta < 0){
        float re, im;
        re = -b / 2*a;
        im = sqrt(-delta) / 2*a;
        printf("Raiz: %f %fj\n",re, im);
        printf("Raiz: %f %fj\n",re, -im);
    }else{
        printf("Raiz: %f\n",(-b + sqrt(delta))/2*a);
        if(delta != 0)
            printf("Raiz: %f\n",(-b - sqrt(delta))/2*a);
    }

    return 0;
}