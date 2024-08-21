//Convert days into years days and months...
#include <stdio.h>
#include <conio.h>
 int main() {

    int year,week,days,remweek,remday;
    printf("Enter Days No ");
    scanf("%d",&days);
    year=days/365;
    remweek=days-(year*365);
    week=remweek/7;
    days=remweek-(week*7);
   
    printf("No of Year = %d",year);
    printf("\nNo of Week = %d",week);
    printf("\nNo of Days = %d",days);

    
     return 0;
 }