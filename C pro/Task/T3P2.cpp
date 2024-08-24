// using continue sum of odd no 0 to 10
#include <stdio.h>
int main(){
    int i=0,sum=0;
    while(i<=10){
        if(i%2!=0){
            sum=sum+i;
            continue;
        }
        i++;
    }
    printf("sum of odd no is %d",sum);
    return 0;
}