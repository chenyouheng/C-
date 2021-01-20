#include <stdio.h>

/*返回一个浮点数组的最大值的下标*/
int max(double *ptr, int n);

int main(void) {
    double ar[5] = {1.4, 5.1, 3.2, 8.5, 3.9};
    double *ptr = ar;
    printf("%d", max(ptr, 5));
}

int max(double *ptr, int n) {
    int i;
    double max = *ptr;
    int index = 0;
    for (i = 0; i < n; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
            index = i;
        }
    }
    return index;
}
