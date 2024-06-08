#include <iostream>
using namespace std;

int main(){
    string FirstName = "Quinn";
    string LastName = "hindamrsh";

    cout << FirstName + LastName << endl;
    cout << FirstName +' '+ LastName <<endl;

    cout << FirstName.append(LastName) << " FirstName.append(LastName)" << "\n\n";

    int num = 3;
    //cout << FirstName + num; doesnt work

    string temp = "123456789";
    cout << temp.size() << " temp.size()" << endl;

    cout << temp[0]  << endl;
    cout << temp[temp.length() - 1]<<endl;

    temp[2] = '2';

    cout << temp << endl;

    cout << temp.at(0) <<endl;

    temp.at(3) = '3'; //changes index 3 to 3

    cout << temp << "\n\n";

    string greeting1 = "Hello";  // Regular String
    char greeting2[] = "Hello";  // C-Style String (an array of characters)

    cout << greeting1 <<endl;
    cout << greeting2 <<endl;//prints the same
}