#include <iostream>
#include <cmath>

using namespace std;

int main(){
    cout << sqrt(64) << endl;
    cout << round(2.54) << endl;
    cout << log(2) << "\n\n";

    cout << max(1,5) << endl;
    cout << max(1,5) << endl;

    int nums[4] = {0,1,2,3}; //size doesnt start at 0
    cout << nums << endl; //doesnt work properly

    //cout << max(nums) << endl; //doesnt work
    //cout << max(nums,-1) << endl; //doesnt work


    //int nums2[3];
    //nums2 = {4,5,6};

    int nums2[3] = {4,5,6};
    //cout << max(nums,nums2); // doesnt work

}