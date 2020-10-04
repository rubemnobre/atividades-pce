/*
Rubem José Nobre Bezerra Junior
Engenharia Elétrica - UFC
https://github.com/rubemnobre/atividades-pce
*/

#include<stdio.h>

int main(){
    int cnt = 1;
    int somaq, qsoma;
    while(cnt <= 10){
        somaq += cnt*cnt;
        qsoma += cnt;
        cnt++;
    }
    qsoma *= qsoma;
    printf("%d\n", qsoma-somaq);
    return 0;
}