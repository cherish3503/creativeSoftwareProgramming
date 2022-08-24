#include <stdio.h>
#include <stdlib.h>

int main(){
    char* pi = new char;
    *pi = 'a';
    //2byte
    delete pi;
}