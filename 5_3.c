//返回一个数组的最大值

#include <stdio.h>

int max(int * ptr, int n);

int main(void){
    int ar[5] = {1,5,3,8,3};
    int * ptr = ar;
    printf("%d", max(ptr,5));
}

int max(int * ptr, int n){
    int i;
    int max = *ptr;
    for (i=0;i<n;i++){
        if (*(ptr + i)>max){
            max = *(ptr + i);
        }
    }
    return max;
}
