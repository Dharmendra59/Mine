//wap in c use of if else for devisible 5 and 11
#include<stdio.h>
int main()
{
    /* code */
    int a;
    printf("enter any no");
    scanf("%d",&a);
    if(a%5==0 && a%11==0){
        printf(" No is devisible by 5 and 11 ");
    }
    else { 
                printf("No is not devisible by 5 and 11 ");

    }
    return 0;
}
