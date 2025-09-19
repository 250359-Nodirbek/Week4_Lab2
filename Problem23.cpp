#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    string rank[] = {"Ace", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    string suit[] = {"Clubs", "Diamonds","Hearts","Spades"};
    int a = rand() % 13;
    int b = rand() % 4;
    cout << "Your card is " << rank[a]<<" "<<suit[b]<<endl;
}