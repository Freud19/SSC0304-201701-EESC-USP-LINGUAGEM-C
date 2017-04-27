#include <stdio.h>
#include <stdlib.h>

int main(){
int i,n;
printf("Digite um numero e calcularemos seus divisores:\n");
scanf("%d",&n);
if(n>0){
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d\n",i);
        }
    }
}else{
    printf("Digite um numero inteiro positivo\n");
}
return 0;
}
