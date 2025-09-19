#include <iostream>
using namespace std;
int main() {
    int month;
    cout <<"Enter month: "<<endl;
    cin >> month;
    switch (month) {
        case 1:
            cout <<"- New Year, 1st January"<<endl;
            cout <<"- Defender of the Fatherland Day, 14th January"<<endl;
            break;
        case 3:
            cout <<"- International Women's Day, 8th March"<<endl;
            cout <<"- navruz, 21st March";
            break;
        case 5:
            cout <<"Memory and Honor Day, 9th May"<<endl;
            break;
        case 9:
            cout <<"Independence Day, 1st September"<<endl;
            break;
        case 10:
            cout <<"National teachers' and educators' day, 1st October"<<endl;
            break;
        case 12:
            cout <<"Constitution Day, 8th December";
        default:
            cout <<"In February, April, June, July, August and November there is no holidays. there are Ramadan Hayit and Kurban Hait but their dates change"<<endl;
            break;
    }
    return 0;
}
