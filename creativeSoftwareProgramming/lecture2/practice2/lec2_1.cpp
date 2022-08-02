#include <stdio.h>

int main(){
    char ch1 = 'a';
    char* pch1 = &ch1;

    printf("value of ch1: %d\n",ch1);
    printf("address of ch1: %p\n",&ch1);
    printf("rval of pch1: %c\n",*pch1);
    printf("value of pch1: %p\n", pch1);
    printf("address of pch1: %p\n", &pch1);

    return 0;
}
