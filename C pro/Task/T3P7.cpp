//check prime or not
#include <stdio.h>
int main(){
    int n,i;
    printf("Enter any no : ");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            printf("Not Prime");
            break;
        }
    }
    if(i==n){
        printf("Prime");
    }
    return 0;
}