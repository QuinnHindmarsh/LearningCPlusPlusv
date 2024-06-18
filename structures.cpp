#include <iostream>
using namespace std;

int main(){

    struct {
        int age;
        string name;
        string DOB;
    }members;

    members.age = 18;
    members.DOB = "27/11/2005";
    members.name = "Quinn";


    cout << members.name << "\n\n";

    struct{
        int year;
        string brand;
    }car1,car2;

    car1.year = 2013;
    car2.brand = "hyundia";


    cout << car1.year << endl;
    cout << car2.brand << "\n\n";



    struct people{
        int age;
        string name;
    };

    people p1;

    p1.age = 18;

    cout << p1.age << endl;

}

