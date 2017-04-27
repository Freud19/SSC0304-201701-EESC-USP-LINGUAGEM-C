#include <stdio.h>
int main(){

int W,T,CH,CD,CM;
printf("Qual eh o valor diario da potencia do aparelho em watts e o tempo de utilizacao diario em horas?\n");
scanf("%d %d",&W,&T);
CH=(W*T/1000)*0.642;
CD=CH*24;
CM=CD*30;
printf("Este aparelho tem um gasto por hora de %d, por dia de %d e por mes de %d",CH,CD,CM);
return 0;
}
