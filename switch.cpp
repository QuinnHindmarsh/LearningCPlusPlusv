#include <iostream>
using namespace std;

int main(){
    int num,num2;

    num2 = 2;


    switch(num2){
        case 1:
            cout << 'a';
        case 2:
            cout << 'b';
        case 3:
            cout << 'c';

    }

    switch(num2){
        case 1:
            cout << '1';
            break;
        case 2:
            cout << '2';
            break;
        case 3:
            cout << '3';
            break;

    }

    cout << "\nenter a number:";
    cin >> num;

    switch(num){
        case 1:
            cout << 'a' <<endl;
        case 2:
            cout << 'b'<<endl;
        case 3:
            cout << 'c'<<endl;
        default:
            cout << "this is pretty much an else statment"<<endl;

    }

    switch(num){
        case 1:
            cout << '1'<<endl;
            break;
        case 2:
            cout << '2'<<endl;
            break;
        case 3:
            cout << '3'<<endl;
            break;
        default:
            cout << "this is pretty much an else statment"<<endl;

    }

    switch(num){
        default:
            cout << "if i put it at the start and i have a break then nothing else runs"<<endl;/* nvm this doesnt run when num =2*/
            break;
        case 1:
            cout << '1'<<endl;
            break;
        case 2:
            cout << '2'<<endl;
            break;
        case 3:
            cout << '3'<<endl;
            break;


    }

    cout << endl;


};