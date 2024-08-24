// fibonacci series of n no
#include <stdio.h>
int main(){
    int n,a=0,b=1,c=0;
    printf("Enter any no : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;  
    }
    return 0;
}