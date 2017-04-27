#include <stdio.h>
void main(){

float prest,valor,taxa,tempo;
taxa=1.5;
printf("Qual eh o valor devido em reais e ha quanto tempo você tah devendo em meses?/n");
scanf("%f %f",&valor,&tempo);
prest = valor + (valor*(taxa/100)*tempo);
printf("O valor devido eh %f", prest);
return;
}
