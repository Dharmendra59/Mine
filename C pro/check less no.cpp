//wap in c use of nested if check less no
#include<stdio.h>
int main()
{
    /* code */
    int a,b,c;
    printf("Enter ur age and Weight\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if (a>c)
        {
            printf("A is Greater %d",a);
            
        }
        else{
            printf("B is greater %d",b);
        }
        if (b>c)
        {
           printf("B is greater %d",b);
        }
        else{
            printf("C is greater %d",c);
        }
        
    }
    else{
        printf("No is same");
    }
  
    return 0;
}
