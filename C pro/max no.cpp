// wap to check max no...
#include<stdio.h>
int main() {
    int a,b,c;
    printf("enter three no\n");
    scanf("%d %d %d",&a,&b,&c);
    (a>b&&a>c) ? printf("A is max %d",a):(b>a&&b>c)? printf("\nB is max %d",b) :printf("\nC is max %d",c);
    
   


    
    return 0;
}  