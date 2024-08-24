// check even odd list using one dimensional array
#include <stdio.h>

int main() {

    int arr[5];
    int i;
    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
        printf("even ");

    for (i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
        printf("\nodd ");

    for (i = 0; i < 5; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }   

    return 0;
}