// remove last element of an array
#include <stdio.h>
int main()
{
    int a[10], i, n;
    printf("enter the number of elements in an array: ");
    scanf("%d", &n);
    printf("enter the elements of an array: "); 
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = n; i < 0; i--)
    {
        a[i] = a[i + 1];
    }
    printf("the new array is: ");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}