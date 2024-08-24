//wap in c use of else if
#include<stdio.h>
int main()
{
    /* code */
    char ch;
    printf("enter any character");
    scanf("%c",&ch);
    if(ch=='I'){
        printf(" Dharmendra is the student of SPN College");
    }
    else if (ch=='A')
    { 
        printf(" Dharmendra is smart student");

    }
       else if (ch=='R')
    { 
        printf(" Rani is a Girl");

    }
    else{
        printf("pls Enter valid char");
    }
    return 0;
}
