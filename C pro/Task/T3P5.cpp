//sun of odd no 1 to 100
#include <stdio.h>
int main(){
    int i,sum=0;
    for(i=1;i<=100;i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    printf("sum of odd no is %d",sum);
    return 0;
}