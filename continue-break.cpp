#include <iostream>
using namespace std;

int main(){
    for(int x = 0; x < 10; x++){
        cout << x << endl;
        if (x==6){
            break;
        }
    }

    cout << "\n\n";

    for(int x = 0; x < 10; x++){
        if (x==6){
            continue; // stops one itteration
        }
        cout << x << endl;
    }

    cout << "\n\n";
    int i = 0;
    while (i < 10) {
        if (i == 4) {
            i++;
            break;
        }
        cout << i << "\n";
        i++;
    }

    cout << "\n\n";
    i = 0;
    while (i < 10) {
        if (i == 4) {
            i++;
            continue;
        }
        cout << i << "\n";
        i++;
    }
}

