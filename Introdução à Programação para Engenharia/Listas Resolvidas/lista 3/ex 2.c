#include <stdio.h>
#include <stdlib.h>

int main(){
int a,b,c,d;
printf("Digite quatro numeros\n");
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a%2==0&&b%2==0&&c%2==0&&d%2==0){
        printf("A soma dos numeros pares eh %d", a+b+c+d);
}
else if(a%2==0&&b%2==0&&c%2==0&&d%2!=0){
        printf("A soma dos numeros pares eh %d", a+b+c);
}
else if(a%2==0&&b%2==0&&c%2!=0&&d%2!=0){
        printf("A soma dos numeros pares eh %d", a+b);
}
else if(a%2==0&&b%2!=0&&c%2!=0&&d%2!=10){
        printf("A soma dos numeros pares eh %d", a);
}
else if(a%2!=0&&b%2==0&&c%2!=0&&d%2!=0){
        printf("A soma dos numeros pares eh %d",b);
}
else if(a%2!=0&&b%2==0&&c%2==0&&d%2!=0){
        printf("A soma dos numeros pares eh %d", b+c);
}
else if(a%2!=0&&b%2==0&&c%2==0&&d%2==0){
        printf("A soma dos numeros pares eh %d",b+c+d);
}
else if(a%2!=0&&b%2!=0&&c%2==0&&d%2!=0){
        printf("A soma dos numeros pares eh %d",c);
}
else if(a%2==0&&b%2!=0&&c%2==0&&d%2!=0){
        printf("A soma dos numeros pares eh %d", a+c);
}
else if(a%2!=0&&b%2!=0&&c%2==0&&d%2==0){
        printf("A soma dos numeros pares eh %d",c+d);
}
else if(a%2!=0&&b%2==0&&c%2!=0&&d%2==0){
        printf("A soma dos numeros pares eh %d",b+d);
}
else if(a%2!=0&&b%2!=0&&c%2!=0&&d%2==0){
        printf("A soma dos numeros pares eh %d",d);
}
else if(a%2!=0&&b%2!=0&&c%2!=0&&d%2!=0){
        printf("A soma dos numeros pares eh 0");
}
return 0;
}
