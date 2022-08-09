#include <iostream>
//#include <typeinfo>
using namespace std;

double square(double a){
    cout << "do";
    return a*a;
}

double square(float a){
    cout << "fl";
    return a*a;
}

int main(){
    //cout << typeid(aa).name() << endl;
    cout << square(5.0f) << endl;
    return 0;
}