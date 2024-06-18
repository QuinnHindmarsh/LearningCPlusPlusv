// this code is not in CMakeLists so will not execute to let it execute put it in "add_executable" in that file

#include <iostream>

using namespace std;

int main() {
    //ARITHMETIC OPPERATORS
    cout << "This is a showcase of the athmitic opperators" << endl;
    int num1 = 11,num2 =9;
    cout << "num 1 = " << num1  << endl;
    cout << "num 2 = " << num2  << "\n\n\n";

    cout << "num 1 + num 2 = " << num1+num2  << endl;
    cout << "num 1 - num 2 = " << num1 - num2  << endl;
    cout << "num 1 * num 2 = " << num1 * num2  << endl;
    cout << "num 1 / num 2 = " << num1 / num2  << endl;
    cout << "num 1 % num 2 = " << num1 % num2 <<"% gets the remainder" << "\n\n\n";

    cout << "num1 ++ = " << ++num1 << endl;// this updates the value of num1, not just prints 1 more then it
    cout << "num1 = " << num1 <<endl;
    cout << "num1 -- = " << --num1 << endl;
    cout << "num1 = " << num1  <<"\n\n\n\n";


    // ASSIGMENT OPERATORS
    cout << "This is a showcase of the assigment opperators" << endl;
    num1  = 0;

    cout << "num 1 = " << num1  << endl;

    num1 +=3;
    cout << "num 1 +=3 : " << num1  << endl;
    num1 -=1;
    cout << "num 1 -=1 : " << num1  << "\n\n";

    num1 *= 3;
    cout << "num 1 *=3 : " << num1  << endl;
    num1 /= 2;
    cout << "num 1 /=2 : " << num1  << "\n\n";

    num1 = 23;
    cout << "num 1 = " << num1  << endl;
    num1 %= 6;
    cout << "num 1 %=4 : " << num1 << " which is the reamineder" << "\n\n"; //remainder

    num1 = 10;
    cout << "num 1 = " << num1  << endl;
    num1 &=12;
    cout << "num 1 &=12 : " << num1 << " converts both to binary, when both have a 1 its a 0, any other combo is a 0"<<endl;
    num1 = 10;
    cout << "num 1 = " << num1  << endl;
    num1 |=12;
    cout << "num 1 |=12 : " << num1 << " similar but when either are a 1 they both become 1"<<endl;
    num1 ^=4;
    cout << "num 1 ^=4 : " << num1 << "idk or car but also similar" << endl;
    cout << ">>= and <<= are also a thing related to binary"





}