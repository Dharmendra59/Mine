//Centigrade into fahrenhiet
#include <stdio.h>
#include <math.h>
int main(){
    float c,f;
    printf("Enter Temp. in Centigrade ");
    scanf("%f",&c);
   
    f=9*c/5+32;

    printf("Temp in fahrenhiet = %f",f );
    return 0;
}