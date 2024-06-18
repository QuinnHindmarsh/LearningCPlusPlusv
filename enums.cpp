#include <iostream>
using namespace std;

int main(){
    enum nums{
        num1 = 25,
        num2 = 50,
        num3 = 75
    };

    enum nums Var = num2;

    cout << Var << endl;
}