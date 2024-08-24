//check vowels or consonant using switch
#include <stdio.h>
int main()  {
    /* code */
    char a;
    printf("Enter any Char\n"); 
    scanf("%c",&a);
    switch (a)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':   
    case 'O':
    case 'U':
        printf("Vowel");
        break;
    default:
        printf("Consonant");
        break;
    }
    return 0;
}