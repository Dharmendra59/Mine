// wap table of any no user according
#include <stdio.h>
int main()  {
    int n;
    printf("Enter any no : ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d \n",n,i,n*i);
    }
    return 0;
}