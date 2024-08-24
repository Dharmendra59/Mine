// enter 5 no in an array and also enter  6th no acoording to user periority
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5], i, p, temp;
    printf("enter 5 no");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter 6th no\n"); 
    scanf("%d", &p);
    temp = a[5];
    // for (i = 5; i >= p; i--)
    // {
    //     a[i] = a[i-1];
    // }
    a[p] = temp;
    printf("updated array is = ");
    for (i = 0; i < 6; i++)
    {
        printf("%d", a[i]);
    }
    getch();
}