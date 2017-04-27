#include <stdio.h>
int main(){

int A,B;
float C;
printf("Entre dois valores inteiros quaisquer:\n");
scanf("%d %d",&A,&B);
C=(A-B)*(A-B);
printf("O quadrado da diferenca entre %d e %d é %f",A,B,C);
return 0;
}
