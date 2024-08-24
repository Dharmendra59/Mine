// wap 1 to 5 using continue
#include <stdio.h>
int main()  {
    int i = 1;
    while(i <= 10) {
        if(i == 6) {
        continue;
        }
        printf("%d ", i);
        i++;
    }
    return 0;
}