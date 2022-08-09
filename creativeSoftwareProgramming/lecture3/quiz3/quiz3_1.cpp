#include <stdio.h>
int main(){
    int num1 = 20;
    int num2 = 30;
    const int* ptr1 = &num1;
    int* const ptr2 = &num1;
    const int* const ptr3 = &num1;
    char str1[] = "string1";
    const char* str2 = "string2";

    //*ptr1 = 30;
    num1 = 30;

    //ptr2 = &num2;
    *ptr2 = 30;

    //ptr3 = &num2;
    //*ptr3 = 40;

    //str1 = "string11";
    str2 = "string22";

    str1[0] = 'X';
    //str2[0] = 'X';

    return 0;
}