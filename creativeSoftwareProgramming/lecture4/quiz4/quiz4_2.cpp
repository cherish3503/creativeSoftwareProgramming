#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    int* nums = new int[num];

    for(int i=0; i<num; ++i)
        nums[i] = i;
    
    for(int i=0; i<num; ++i)
        cout << nums[i] << endl;

    delete nums;

    return 0;
}