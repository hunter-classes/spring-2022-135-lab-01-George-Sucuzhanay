#include <iostream>
#include <string>

int main()

{
    int year;

    std::string calenderType = "";

    std::cout << "Enter Year: ";
    std::cin >> year;

    if(year % 4 != 0){
        calenderType = "common year";
    }
    else if(year % 100 != 0){
        calenderType = "leap year";

    }
    else if(year % 400 != 0){
        calenderType = "common year";
    }
    else{
        calenderType = "leap year";

    }
    std::cout << calenderType << "\n";
}