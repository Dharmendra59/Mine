//generate following pattern
//ABCDEFG
//ABC EFG
//AB   FG 
//A     G
#include <stdio.h>
int main(){
    char ch='A';
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}