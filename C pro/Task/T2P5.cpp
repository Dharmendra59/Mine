//simple calculator using switch
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 1 add 2sub or 3 ");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        /* code */
        printf("enter two no for add ");
        scanf("%d %d",&a,&b);
        printf("add is = %d",a+b);
        break;
    case 2:
        /* code */
        printf("enter two no for sub ");
        scanf("%d %d",&a,&b);
        printf("add is = %d",a-b);
        break;
    case 3:
        /* code */
        printf("enter any no for even odd ");
        scanf(" %d",&a);
        if( a%2==0){
        printf("No is even = %d",a);
        }
        else{
            printf("No is odd = %d",a);
        }
        break;
    
    default:
    printf("invalid No");
        break;
    }
    return 0;
}
