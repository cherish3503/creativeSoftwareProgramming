#include <iostream>
#include <string>
using namespace std;

void addHello(string& name){
    name += ", hello";
}

int main(){
    string name = "Tom";
    addHello(name);
    cout << name << endl;

    return 0;
}