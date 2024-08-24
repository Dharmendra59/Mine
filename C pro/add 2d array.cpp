//wap to add two no by using two d array
#include <stdio.h>  

int main()
{   
    int a[5][5],b[5][5],c[5][5],i,j;
    printf("Enter the no of rows and column\n");
    scanf("%d %d",&i,&j);
    printf("Enter the elements\n");
    for(int k=0;k<i;k++){
        for(int l=0;l<j;l++){   
            scanf("%d",&a[k][l]);
        }   
    }   
    printf("Enter the elements\n");  
    for(int k=0;k<i;k++){   
        for(int l=0;l<j;l++){   
            scanf("%d",&b[k][l]);   
        }   
    }   
    for(int k=0;k<i;k++){           
        for(int l=0;l<j;l++){
            c[k][l]=a[k][l]+b[k][l];
            printf("%d ",c[k][l]);
        }
        printf("\n");
    }
    return 0;
}
