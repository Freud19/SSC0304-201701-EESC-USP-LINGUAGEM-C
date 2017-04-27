#include <stdio.h>

int main(){

int HA,HT,SB,SL;
printf("Quanto vc ganha por hora aula e qtas horas vc trabalhou neste mes? \n")/
scanf("%d %d",&HA,&HT);
SB=HA*HT;
SL=0.9*SB;
printf("Seu salario bruto eh de %d e seu salario liquido eh de %d",SB,SL);
return 0;
}
