//print pattern
//1
//11
//121
//1331
//14641
#include <stdio.h>
int main(){
    int n,i,j;  
    printf("Enter any no : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",i*11);  
        }   
        printf("\n");
    }
    return 0;
}