//add no until the user zero using do while
#include <stdio.h>
int main(){
    int n,sum=0,i=0;
    printf("Enter any no : ");
    scanf("%d",&n);
    do{
        sum=sum+n;
        printf("Enter any no : ");
        scanf("%d",&n);
        i++;
    }while(n!=0);
    printf("sum of first %d natural no is %d",i,sum);
    return 0;
}