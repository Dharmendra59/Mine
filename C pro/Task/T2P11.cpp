//check whether a character is lowercase or uppercase
#include <stdio.h>
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
    else
    {
        printf("Enter valid Character");
    }
    return 0;
}