#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,n;
    printf("Forneca o numero de linhas que vc deseja para a sua arvore:\n");
    scanf("%d",&n);
    for(j=1;j<=n;j++){
        for(i=1;i<=j;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
