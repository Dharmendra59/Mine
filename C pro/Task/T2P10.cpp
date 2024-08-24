//count ttl no of notes in given amount. if the amount is greater than 500 then divide amount by 500 to get maximum 500 notes
#include <stdio.h>
int main(){
    int a,nts,prm;
    printf("Enter amount\n");
    scanf("%d",&a);
    if(a>=500){
        nts=a/500;
        prm=a-nts*500;
        printf("500 = %d",prm);
    }
    else{
        printf("No notes");
    }
    return 0;
}