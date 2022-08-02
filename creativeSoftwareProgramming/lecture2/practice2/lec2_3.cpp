#include <stdio.h>
int main(){
    int arr[] = {5, 10, 15};
    int* parr = arr;

    printf("size of arr : %d\n", sizeof(arr));
    printf("size of parr : %d\n", sizeof(parr));

    return 0;
}
