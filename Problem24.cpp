#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int guess,a,b;
    int number = rand()%90+10;
    cout <<"Guess the two digit number: "<<endl;
    cin>>guess;
    a = guess/10;
    b= guess%10;
    if (a == number/10 and b == number%10) {
        cout <<"100% accuracy"<<endl;
        cout <<"The number was " <<number<<endl;
    }
    else if (a == number/10 and b != number%10 or a != number/10 and b == number%10) {
        cout <<"50% accuracy"<<endl;
        cout <<"The number was " <<number<<endl;
    }
    else {
        cout <<"0% accuracy "<<endl;
        cout <<"The number was " <<number<<endl;
    }
}