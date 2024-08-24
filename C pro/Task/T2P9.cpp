// the discount applicable 5% if the amount is between 1000 to 5000 and 10% if the amount is above 5000.No discount if the amount is below 1000
#include <stdio.h>
int main(){
    int a;
    printf("Enter amount\n");
    scanf("%d",&a);
    if(a>=1000 && a<=5000){
        printf("Discount 5% = %d",a*0.05);
        
        }
    else if(a>5000){
        printf("Discount 10% = %d",a*0.1);
    }
    else{
        printf("No discount");
    }
    return 0;
}