//wap in c Employee salary program
#include<stdio.h>
int main()
{
    /* code */
    float bs,da,hra,gs;
    printf("enter Basic Sallary");
    scanf("%f",&bs);
    if (bs<=10000)
    {
       da = 0.8;
        hra = 0.2;



    }
    else if ( bs<=20000)
    {
         da = 0.9;
        hra = 0.25;
   

    }
    else if (bs>=20001)
    {
        da=0.3;
        hra=0.95;
    }
        gs = bs + bs*da+ bs*hra;
        printf("Your gross salary will be %f",gs);

    return 0;
}
