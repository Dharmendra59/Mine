//Average and Percentage
#include <stdio.h>
#include <math.h>
int main(){
    float h,e,m,sc,sst,total,avrg,per;
    printf("Enter the marks of Hindi \n");
    scanf("%f %f %f %f %f",&h,&e,&m,&sc,&sst);

    total=h+e+m+sc+sst;
    avrg=total/5;
    per=avrg;
    printf("Average of all subjects  = %f ",avrg);
    printf("\nPercentage of all subjects  = %f %",per);

    return 0;
}