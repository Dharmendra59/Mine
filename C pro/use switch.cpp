//wap in c to use of switch statement
#include<stdio.h>
int main(){
    char ch;
    printf("enter any Uppercase character\n");
    scanf("%c",&ch);
    switch(ch){
    case 'A': 
        printf(" A for Aeroplane\n");
        break;
    case 'B':
        printf(" B for Bird\n");
        break;
    case 'C':
        printf(" C for Cat\n");
        break;
    default:
        printf("pls enter valid character\n");
        break;
    }

    return 0;
}