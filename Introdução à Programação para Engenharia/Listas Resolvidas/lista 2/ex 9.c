#include <stdio.h>

int main(){

int a,b,c,d,rP,rSoma,rSub,extra;
printf("Entre com quatro valores inteiros:\n");
scanf("%d %d %d %d",&a,&b,&c,&d);
rP=a*c;
rSoma=b+d;
rSub=a-d;
extra=((rP-rSoma)+(rSub*a))/2;
printf("Os resultados das contas doidas sao: %d, %d,%d e %d",rP,rSoma,rSub,extra);
return 0;
}
