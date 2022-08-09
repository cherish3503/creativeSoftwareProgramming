#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "hello world";
    cout << str << endl;

    string str1 = str + " - bye world";
    cout << str1 << endl;
    cout << str1.length() << endl;
    cout << str1[0] << endl;

    str[0] = 'j';
    str.resize(5);
    cout << str << endl;

    const char* ptr = str.c_str();
    printf("%s \n", ptr);





    return 0;
}