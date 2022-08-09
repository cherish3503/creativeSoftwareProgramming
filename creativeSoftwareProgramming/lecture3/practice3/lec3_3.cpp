#include <iostream>

using namespace std;

int main(){
    string line;

    cout << "write a line " << endl;
    // while(cin >> line && line != "q")
    //     cout << line << "---" << endl;

    while(getline(cin, line, ':')){ 
        //':'가 나올때 까지 getline
        // 이후에 --- 출력 그 다음 whlie문 반복
        cout << line << "---" << endl;
    }

    return 0;
}