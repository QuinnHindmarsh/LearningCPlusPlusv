#include <iostream>
using namespace std;

int main(){
    string food = "Pizza";  // food variable
    string &meal = food;    // reference to food

    cout << meal << endl; // Pizza
    cout << &meal << endl; // gets the memory address in hex
}