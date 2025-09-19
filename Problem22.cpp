#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    string guess;
    int number = rand();
    cout <<"Guess whether the number is even or odd"<<endl;
    cin>>guess;
    if (guess == "even" and number%2 == 0) {
        cout <<"Correct"<<endl;
    }
    else if (guess == "odd" and number%2 == 1) {
        cout <<"Correct"<<endl;
    }
    else {
        cout <<"Wrong "<<number<<endl;
    }
}