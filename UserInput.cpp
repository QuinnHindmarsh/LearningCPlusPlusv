//cout << "test";//   - i cant just do it like that - i think it needs to be in a function

#include <iostream>
using namespace std;

//with cin you can only store a single word, a space ends it. get line lets you read the
int main(){

    int num = 5;
    cout << num << endl;
    cin >> num; //gets user input
    cout << num << "\n\n";

//works if i comment the other out
    string name;
    cout << "enter your name: ";
    getline(cin,name);
    cout <<endl << "weclcome " <<name<<endl;


    return 0;
}