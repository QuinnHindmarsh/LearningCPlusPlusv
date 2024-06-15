#include <iostream>
using namespace std;

int main(){
    int num = 2;

    for (cout << "i am doing this in a stupid way" <<endl; num ==2; cout << "this is the least practical way to do a for loop" << endl){
        cout <<"enter 2 to continue this working" << endl;
        cin >> num;
    }

    for (int num2 = 0; num2 < 10; num2++){
        cout << num2 << endl;
    }

    int nums[5] = {10,20,30,40,50};

    for (int i : nums ){
        cout << i << endl;
    }

    for (int num =0;num<5;++num){
        for (int num2 = 0; num2 <3; ++num2){
            cout << "inner" << endl;

        }
        cout << "outer"<<endl;
    }

}