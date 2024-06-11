#include "iostream"

using namespace std;


int main(){
    int num1,num2;
    num1 = 3;
    num2 = 5;

    if (1==1){
        cout << "yes" << endl;
    }

    if (num1 >num2){
        cout << "num1>num2" << endl;
    }
    else if (num1 == num2){
        cout << "num1 == num2" <<endl;
    }
    else {
        cout << "niehter condition is True" << endl;
    }

    string res = (num1 < num2) ? "num 1 < num2" : "num1 is not < then num2";
    cout << res << endl;

}