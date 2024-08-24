//print 1 to 100 no
#include <stdio.h>
int main(){
    int i=1;
    while(i<=100){  
        printf("%d\t",i);
        i++;
    }
    printf("\nFor Loop\n");
    for(i=1;i<=100;i++){
        printf("%d\t",i);
        
    }
    printf("\nDo While Loop\n");
   i=1;
    do{
        printf("%d\t",i); 
        i++;  
        }
    while(i<=100);
    return 0;
}