//Conmpound Interest
#include <stdio.h>
#include <math.h>
int main(){
    float p,r,t,ci,a,re;
    printf("Enter mul dar samay\n");
    scanf("%f %f %f",&p,&r,&t);
   
    a=p*pow((1+r/100),t);
    ci=a-p;

    printf("Compound interest = %f",ci);
    return 0;
}