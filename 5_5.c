#include <stdio.h>

/*返回一个浮点数组的最大值的下标*/
double diff(double *ptr, int n);

int main(void) {
    double ar[5] = {1.4, 5.1, 3.2, 8.5, 3.9};
    double *ptr = ar;
    printf("%.1lf", diff(ptr, 5));
}

double diff(double *ptr, int n) {
    int i;
    double max = *ptr;
    double min = *ptr;
    for (i = 0; i < n; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
        if ((*ptr + i) < min) {
            min = *(ptr + i);
        }
    }
    return max - min;
}
