// check wether no is perfect or not
#include <stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter any no : ");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        printf("%d is perfect no",n);
    }
    else{
        printf("%d is not perfect no",n);
    }
    return 0;
}