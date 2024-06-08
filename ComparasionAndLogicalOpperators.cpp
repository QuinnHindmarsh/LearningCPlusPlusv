#include <iostream>
using namespace std;

int main(){
    cout << "comparasion opperator showcase"<<"\n\n";
    int num1,num2;
    num1 = 3;
    num2 = 5;

    cout << "num1 = " <<num1 << endl;
    cout << "num2 = " <<num2 << "\n\n";

    cout << "num1 == num2 = " << (num1 == num2) << endl;
    cout << "num1 != num2 = " << (num1 != num2) << endl;
    cout << "num1 > num2 = " << (num1 > num2) << endl;
    cout << "num1 < num2 = " << (num1 < num2) << endl;
    cout << "num1 >= num2 = " << (num1 >= num2) << endl;
    cout << "num1 <= num2 = " << (num1 <= num2) << "\n\n";

    cout << "logical opperator showcase"<<"\n\n";

    cout << "1 < 4 && 1 == 1: " << (1 < 4 && 1 ==1 ) << " and opperator" << endl;
    cout << "1 > 4 && 1 == 1: " << (1 > 4 && 1 ==1 ) << " and opperator" << "\n\n";


    cout << "1 > 4 || 1 == 1: " << (1 > 4 || 1 ==1 ) << " or  opperator" << endl;
    cout << "1 < 4 || 1 == 1: " << (1 < 4 || 1 ==1 ) << " or opperator" << "\n\n";

    cout << "!(1 > 4 && 1 == 1): " << !(1 > 4 && 1 == 1 ) << " not  opperator" << endl;
    cout << "!(1 < 4 || 1 == 1): " << !(1 < 4 || 1 ==1 ) << " not opperator" << "\n\n";



}
