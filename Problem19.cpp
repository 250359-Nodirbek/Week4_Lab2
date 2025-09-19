#include <iostream>
using namespace std;
int main() {
    float weight;
    int num;
    cout <<"Enter weight: "<<endl;
    cin >> weight;
    if(0 < weight and weight <= 1) {
        num = 1;
    }
    else if(1 < weight and weight <= 3) {
        num = 2;
    }
    else if(3 < weight and weight <= 10) {
        num = 3;
    }
    else if(10 < weight and weight <= 20) {
        num = 4;
    }
    else {
        num = 5;
    }
    switch (num) {
        case 1:
            cout <<"3500"<<endl;
            break;
        case 2:
            cout <<"5500"<<endl;
            break;
        case 3:
            cout <<"8500"<<endl;
            break;
        case 4:
            cout <<"10500"<<endl;
            break;
        case 5:
            cout <<"The package cannot be shipped"<<endl;
            break;
    }
    return 0;
}