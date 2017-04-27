#include <stdio.h>
int main(){
    int v,c,l,a;
    printf("Quais sao o comprimento, a largura e a altura da caixa?\n");
    scanf("%d %d %d",&c,&l,&a);
    v=c*l*a;
    printf("O volume da caixa eh %d",v);
    return 0;
}
