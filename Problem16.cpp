#include <iostream>
using namespace std;
int main() {
    int grade;
    cout <<"Enter grade: "<<endl;
    cin >> grade;
    grade = grade / 10;
    switch (grade) {
        case 10:
            cout <<"A"<<endl;
            break;
        case 9:
            cout <<"A"<<endl;
            break;
        case 8:
            cout <<"B"<<endl;
            break;
        case 7:
            cout <<"C"<<endl;
            break;
        case 6:
            cout <<"D"<<endl;
            break;
        default:
            cout <<"F"<<endl;
            break;
    }
    return 0;
}