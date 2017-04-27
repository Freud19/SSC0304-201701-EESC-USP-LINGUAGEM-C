#include <stdio.h>
#include <stdlib.h>

int main(){
int a,b,c,d,n;
printf("Escreva um valor em reais.\n");
scanf("%d",&n);
if(n>0){
    a=n/100;
    b=(n%100)/50;
    c=((n%100)%50)/10;
    d=((n%100)%50)%10;
    printf("%d pode ser dividido em %d notas de 100, %d notas de 50, %d notas de 10 e %d notas de 1",n,a,b,c,d);
}else{
    printf("Este n eh um valor valido\n");
}
return 0;
}
