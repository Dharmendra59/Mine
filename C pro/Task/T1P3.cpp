//use of ternary operator for compare two number...
#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter Two No. for compare \n");
    scanf("%d %d",&a,&b);
    c=(a>=b)? a:b;
    printf("greatest no is = %d",c);


    return 0;
}