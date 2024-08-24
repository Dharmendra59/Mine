// factorial no
#include <stdio.h>
int main()  {
    int n;
    printf("Enter any no : ");
    scanf("%d",&n);
    int fact=1;
    for(int i=n;i>=1;i--){
        fact=fact*i;
        if(i!=1){
            printf("%d * ",i);
     }
            else{
            printf("%d",i);
            }
    }
    printf("=%d",fact);
    return 0;
}