#include <iostream>

int main() {
    char command;
    std::cout <<"Enter command: "<<std::endl;
    std::cin >> command;
    if (command == 'g') {
        std::cout <<"Go!"<<std::endl;
    }
    else if (command == 'y') {
        std::cout <<"Get ready!"<<std::endl;
    }
    else if (command == 'r') {
        std::cout <<"Stop!"<<std::endl;
    }
    return 0;
}