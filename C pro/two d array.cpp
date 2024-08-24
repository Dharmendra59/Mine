// row and column in 2d array
#include <stdio.h>
int main()
{
    int a[5][5],i,j;
    printf("Enter the no of rows and column\n");
    scanf("%d %d",&i,&j);
    printf("Enter the elements\n");
    for(int k=0;k<i;k++){
        for(int l=0;l<j;l++){   
            scanf("%d",&a[k][l]);
        }
    }
    printf("The elements are\n");
    for(int k=0;k<i;k++){
        for(int l=0;l<j;l++){
            printf("%d ",a[k][l]);
        }
        printf("\n");
    }
    return 0;
}