//Length convert centimeter into meter and Kilometer...
#include <stdio.h>
#include <conio.h>
 int main() {

    float cent,meter,km;
    printf("Enter the length in centimeter");
    scanf("%f",&cent);
    meter = cent/100;
    km = cent/100000;
    printf("Length in Meter= %f \n Length in Kilometer= %f",meter,km);
    
     return 0;
 }