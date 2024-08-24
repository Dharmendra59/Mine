//grade according to percentage
#include <stdio.h>
int main(){

    int a,b,c,d,e,ttl,per;
    printf("Enter Five subject marks\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    ttl=a+b+c+d+e;
    per=ttl/5;

    if(per>=90){
        printf("Grade A+");
    }
    else if(per>=80){
        printf("Grade A");
    }
    else if(per>=70){
        printf("Grade B");
    }
    else if(per>=60){
        printf("Grade C");
    }
    else if(per>=50){
        printf("Grade D");
    }
    else{
        printf(" Fail");
    }
}