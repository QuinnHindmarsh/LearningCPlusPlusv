#include <iostream>
using namespace std;

int main(){
    string idk = "abc";
    string* point = &idk;

    cout << point << endl;
    cout << *point << endl;
}