// factor of any no
#include <stdio.h>
int main()  {
    int n;
    printf("Enter any no : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d\t",i);
        }
    }   
    return 0;
}