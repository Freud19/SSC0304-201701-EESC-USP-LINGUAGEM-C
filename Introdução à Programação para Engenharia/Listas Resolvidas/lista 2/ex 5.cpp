#include <stdio.h>
int main(){

	int D,T,V,G;
	printf("Qual foi o tempo gasto na viagem e a velocidade media? \n");
	scanf("%d %d",&T,&V);
	D=T*V;
	G=D/12;
	printf("A distancia percorrida e a quantidade em litros de combustivel gasto foram: %d e %d",D,G);
	return 0;
}
