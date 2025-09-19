#include <iostream>
using namespace std;
int main() {
    int number, casevalue;
    cout <<"Enter number: "<<endl;
    cin >> number;
    if (number > 0) {
        casevalue = 1;
    }
    else if (number == 0) {
        casevalue = 0;
    }
    else {
        casevalue = -1;
    }
    switch (casevalue) {
        case 1:
            cout <<"Positive"<<endl;
            break;
        case 0:
            cout <<"It is Zero"<<endl;
            break;
        case -1:
            cout <<"Negative"<<endl;
            break;
    }
    return 0;

}
