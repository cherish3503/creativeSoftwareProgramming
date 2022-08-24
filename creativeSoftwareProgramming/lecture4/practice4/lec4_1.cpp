#include <iostream>
#include <stdlib.h>
using namespace std;

void TestFunction(int n){
    int* variable_size_array = (int*) malloc(sizeof(int) * n);
    for (int i = 0; i<n; ++i){
        cout << variable_size_array[i] << endl;
    }
    free(variable_size_array);
}

int main(){
    TestFunction(3);
    return 0;
}