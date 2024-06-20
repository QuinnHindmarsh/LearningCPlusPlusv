#include "iostream"
using namespace std;

//functions need to be above main
void MyFirstFunc(){
    cout << "does this work?" << endl; //yes it does
}

void NewFunc();

void FuncWithParms(int num = 0){
    cout << num << " this works" << endl;
}

int multiply(int num1, int num2){
    return num1 * num2;
}

int Output(string &text){
    cout << text << endl;
}

int main(){
    // calling
    MyFirstFunc();
    NewFunc();
    //NewerFunc() - doesnt work
    cout << endl;

    //paramaters
    int y = 3;
    FuncWithParms(4);
    FuncWithParms(y);
    FuncWithParms(); // uses defult parms

    //return
    int num;
    cout << endl;
    cout << multiply(2,5) << endl;
    num = multiply(3,4);
    cout << num << endl;
    cout << endl;

    //passing by reference
    string idk = "uiashduihasduihsaiudhaiuhd";
    Output(idk);



}


void NewFunc(){
    cout << "i declared this above but only put the text bellow main" << endl;
}

void NewerFunc(){
    cout << "this function doenst work but cus i didnt declare it earlier" << endl;
}