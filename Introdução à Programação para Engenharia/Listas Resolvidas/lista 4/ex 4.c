#include <stdio.h>
#include <stdlib.h>

int main(){
int i,j,c,s;
printf("Escreva a quantidade de capitulos e a quantidade de secoes:\n");
scanf("%d %d",&c,&s);
if(c>0&&s>0){
    for(j=1;j<=c;j++){
         printf("Capitulo %d\n",j);
        for(i=1;i<=s;i++){
            printf("Secao %d.%d\n",j,i);
        }
    printf("\n \n");
    }
}else{
    printf("Codigo invalido");
}
return 0;
}
