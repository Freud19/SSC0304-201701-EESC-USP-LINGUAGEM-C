#include <stdio.h>
#include <stdlib.h>

int main(){
int a,b,c;
printf("escreva 3 números:\n");
scanf(" %d %d %d",&a,&b,&c);
if(a>b&&b>c&&a>c){
    printf("%d, %d, %d",c,b,a);
}
else if(a>b&&c>b&&a>c){
    printf("%d, %d, %d",b,c,a);
}
else if(b>c&&b>a&&a>c){
    printf("%d, %d, %d",c,a,b);
}
else if(b>a&&b>c&&c>a){
    printf("%d, %d, %d",a,c,b);
}
else if(c>b&&a>b&&c>a){
    printf("%d, %d, %d",b,a,c);
}
else if(c>a&&c>b&&b>a){
    printf("%d, %d, %d",a,b,c);
}
return 0;
}
