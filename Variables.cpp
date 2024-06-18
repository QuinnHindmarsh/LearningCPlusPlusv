// this code is not in CMakeLists so will not execute to let it execute put it in "add_executable" in that file

#include <iostream>
using namespace std;



//cout << "test";//   - i cant just do it like that - i think it needs to be in a function

int main() {
    // type variableName = value;
    int num1 = 2; //variable defintion
    cout << num1 << endl;

    int num2; // you dont need to assign it a value to start with
    num2 = 15;

    cout << num2 << endl;

    num2 = 13;
    num2 = 14;

    cout<<num2<<endl; //technicually i dont need spaces

    int num = 3; cout << "integer/int: " << num << endl; // whole number
    char chr = 'abc'; cout << "charather/char " << chr  <<  endl; //single charather
    //interesting you can set it to multiple and it uses the last one
    bool status = true; cout << "boolean " << status <<endl; //outputs as 1 or 0

    string myText = "Hello";  cout << "string  " << myText <<endl;   // String (text)
    double myFloatNum = 5.1234567890; cout << "double " << myFloatNum <<endl;// double
    float flout2 = 6.1234567890; cout << "flout " << flout2 <<endl;// float
    // why do float and double show the same amount of decimals??

    //cout << endl endl; doesnt work
    cout << "\n\n";

    cout << flout2 + myFloatNum <<endl;
    int sum = flout2 + myFloatNum;
    cout << sum << endl;

    int x,y,z;
    x = y = z = 50;
    cout << x + y + z << endl;

    y = 25;
    cout << x + y + z << "\n\n";

    const int testa = 12;// cant be changed, gives error if you try
    //testa = 10;

    float f1 = 35e3;//35000
    double d1 = 12E4;//120000

    cout << f1 << endl;
    cout << d1 << endl;


    char a = 65, b = 66, c = 67; //uses ASCII
    cout << a;
    cout << b;
    cout << c;


    string test = "hello wrld";
    cout <<endl << test <<endl;

            cout << "indentation doesnt matter here" <<endl;

cout << "See!" <<endl;


    return 0;
}