// enter 5 no in an array and also enter  6th no acoording to user periority
#include <stdio.h>

int main()
{
    int arr[10]; 
    int i;  
    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
        printf("Enter 6th number: ");
    scanf("%d", &arr[5]);
    for(i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}   