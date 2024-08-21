//print format specifier...... 
#include <stdio.h>

int main() {
    int a = 10;
    double b = 3.14159;
    float c = 2.71828;
    int d = 42;

    printf("Integer value: %d\n", a);
    printf("Double value: %.2lf\n", b);  
    printf("Float value: %.3f\n", c);   
    printf("Another integer value: %d\n", d);

    return 0;
}