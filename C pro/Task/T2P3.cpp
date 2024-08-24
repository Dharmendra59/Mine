//using switch if user enter 44 it will give area of triangle
#include <stdio.h>
int main()
{
    /* code */
    int a, b, c;
    printf("Enter three side of triangle\n");
    scanf("%d %d %d", &a, &b, &c);
    switch (a)
    {
    case 44:
        /* code */    printf("Area of triangle = %d", (a * b) / 2);
        break;
    default:
        break;
    }
    return 0;
}
