#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int x,n;
printf("Escreva dois numeros inteiros. O segundo n pode ser negativo!\n");
scanf("%d %d",&x,&n);
if(n>=0){
    printf("O valor desejado eh %.0f", pow(x,n));
}else{
    printf("O segundo valor eh negativo, imbecil!");
}
return 0;
}
