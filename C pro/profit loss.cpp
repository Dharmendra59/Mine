//wap in c use of else if profit and loss
#include<stdio.h>
int main()
{
    /* code */
    int sell,buy;
    printf("Enter Buy and Sell Price");
    scanf("%d %d",&sell,&buy);
    if(sell>buy){
        printf(" You are in profit");
    }
    else if (sell<buy)
    { 
        printf(" You are in loss");

    }
  
    else{
        printf("Neither Profit Nor Loss");
    }
    return 0;
}
