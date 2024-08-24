//no is greter less and equal using else if
#include <stdio.h>
int main(){
 int a,b,c;
 printf("Enter three no\n");
 scanf("%d %d %d",&a,&b,&c);
 if(a>b && a>c){
    printf("a is greater %d",a);
 }
 else if(b>a && b>c){
    printf("b is greater %d",b);
 }
 else{
    printf("c is greater %d",c);
 }
 

}