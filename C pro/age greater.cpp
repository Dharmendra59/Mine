//wap in c use of nested if age is greater or equal 25 weight greater 55
#include<stdio.h>
int main()
{
    /* code */
    int age,weight;
    printf("Enter ur age and Weight\n");
    scanf("%d %d",&age,&weight);
    if(age>=25){
        if (weight>=55)
        {
            printf("you are aligible for blood donation");
            
        }
        else{
            printf("you are not aligible for blood donation");
        }
    }
    else{
        printf("Under Age");
    }
  
    return 0;
}
