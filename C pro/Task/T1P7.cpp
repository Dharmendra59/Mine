#include <stdio.h>
int main() {
    
     // Wap max no. program

     int a, b,c;

     printf("Enter 3 num : \n");
     scanf("%d %d %d", &a, &b,&c);

     a>b  && a>c ? printf("%d is max of all \n",a) :  b>c  && b>c ? printf("%d is max of all ",b) :  printf("%d is max of all",c);
    



    return 0;
}