#include <stdio.h>
#include <stdlib.h>

int main(){
int a,b,c;
printf("Quais sao os tres lados do triangulo?\n");
scanf("%d %d %d",&a,&b,&c);
if(a<b+c&&b<a+c&&c<a+b){
    if(a!=b&&b!=c){
        printf("O triangulo eh escaleno");
    }
    else if(a==b&&b!=c){
        printf("O triangulo eh isosceles");
    }
    else if(a!=b&&b==c){
        printf("o triangulo eh isosceles");
    }
    else if(a==b&&b==c){
        printf("o triangulo eh equilatero");
    }
    return 0;
}


}
