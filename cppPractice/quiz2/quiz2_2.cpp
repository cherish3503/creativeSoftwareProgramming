#include <stdio.h>
int main(){
    int arr[] = {5,10,15,20};
    int* parr = arr;
    printf("%d %d\n", *(arr+3), parr[1]);
    return 0;
}