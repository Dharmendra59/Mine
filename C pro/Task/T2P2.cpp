//check whether a character is alphabet digit or special no...
#include<stdio.h>

int main()
{
    /* code */
    char a;
    printf("Enter any Char\n"); 
    scanf("%c",&a);
    if (a>=65 && a<=90)
    {
        printf("Whether is Uppercase");
    }
    else if (a>=97 && a<=122)
    {
        
        printf("Whether is lowercase");
    }
    else if (a>=48 && a<=57)
    {
        printf("Whether is digit");
    }
    else
    {
        printf("Whether is special no");
    }
    return 0;
}
