#include <iostream>
using namespace std;


int main() {
    int num = 0;

    while(num != 10){
        cout << num << endl;
        num ++;
    }

    num = 100;
    do{ //post test
        cout << num << endl;
    }
    while(num < 1);




};