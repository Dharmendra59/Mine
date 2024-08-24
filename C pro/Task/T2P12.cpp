//find the division of student
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter Percentage\n");
    scanf("%d",&a);
    if(a>100){
        printf("invalid percentage");
    }
    else if(a>=60){
        printf("First Division");
    }
    else if(a>=50){
        printf("Second Division");
    }
    else if(a>=40){
        printf("Third Division");
    }
    else{
        printf("Fail");
    }
}