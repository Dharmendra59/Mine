// wap 1 to 5 using break
#include <stdio.h>
int main()  {
    int i = 1;
    while(i <= 10) {
        if(i == 6) {
            break;
        }
        printf("%d ", i);
        i++;
    }
    return 0;
}