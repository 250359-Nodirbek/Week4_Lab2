#include <iostream>
using namespace std;
int main() {
    char language;
    cout <<"Enter letter: "<<endl;
    cin >> language;
    switch (language) {
        case 'u':
            cout <<"Salom"<<endl;
            break;
        case 'e':
            cout <<"Hello there"<<endl;
            break;
        case 'r':
            cout <<"Привет"<<endl;
            break;
        case 'g':
            cout <<"Hallo"<<endl;
            break;
        default:
            cout <<"Konichiwa or whatever I dunno this language"<<endl;
            break;
    }
    return 0;
}