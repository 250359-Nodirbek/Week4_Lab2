#include <iostream>
#include <string>
int main() {
    int today, futureday, futuredays;
    std::string daysOfWeek[] = {"Sunday", "Monday","Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    std::cout <<"Enter today's day: "<<std::endl;
    std::cin >> today;
    std::cout <<"Enter the number of days elapsed since today: "<<std::endl;
    std::cin >> futureday;
    futuredays = (today + futureday)%7;
    std::cout << "Today is "<< daysOfWeek[today]<<" and the future day is "<<daysOfWeek[futuredays]<<std::endl;
    return 0;
}