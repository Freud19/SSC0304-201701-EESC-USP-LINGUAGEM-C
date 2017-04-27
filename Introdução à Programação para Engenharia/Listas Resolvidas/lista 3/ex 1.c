#include<stdio.h>
#include<stdlib.h>

int main(){
int idade;
printf("Qual eh a idade do nadador?\n");
scanf("%d",&idade);
if(idade>0){
switch(idade){
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        printf("Este pivete ainda n tem idade para ser nadador\n");
        break;
    case 5:
    case 6:
    case 7:
        printf("O nadador estah na categoria infantil A\n");
        break;
    case 8:
    case 9:
    case 10:
        printf("o nadador estah na categoria infantil B\n");
        break;
    case 11:
    case 12:
    case 13:
        printf("O nadador estah na categoria juvenil A\n");
        break;
    case 14:
    case 15:
    case 16:
    case 17:
        printf("O nadador estah na categoria juvenil B\n ");
        break;
    default:
        printf("O nadador estah na categoria adulto\n");
}
}else{
printf("Coloque um codigo valido, imbecil do caralho\n");
}
}
