#include <iostream>
#include <string>

using namespace std;

int main(){
    string cars[4] = {"toyota","honda","hyundia","nissian"};

    /*
    for (int i : cars){
        cout << i << endl;
    }
    */
/*
    for (int i = 0; i <= size(cars); i++){
        cout << cars[i] <<endl;
    }
    cout << "test" << endl;
*/


    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers) / sizeof(int); //size of gets array size in bits
    cout << getArrayLength << endl;

    for (int i = 0; i < getArrayLength; i++){
        cout << myNumbers[i] << endl;
    }
    cout << "test"<< endl;


    /* //w3 schools said this works but it doesnt for me
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
        cout << i << "\n";
    }
     */


}