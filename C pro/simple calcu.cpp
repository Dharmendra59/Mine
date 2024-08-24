// wap in c to use of switch statement create a simple calculator
#include<stdio.h>

int main(){
  int a=5 ,b=10 ;
    char ch ;
    printf("Enter Char :");
    scanf("%c",&ch);
    switch (ch)
    {
    case '+':
        printf("Sum is %d",a+b);
        break;
     case '-':
        printf("Subis %d",a-b);
        break;
         case '*':
        printf("Mul is %d",a*b);
        break;
         case '/':
        printf("Division is %d",a/b);
        break;
    default:   
     printf("Invlid Char");
        break;
    }


    return 0;
}