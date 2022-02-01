#include <iostream>

int main()
{
    int year;
    std::string calenderType = "";
    int month;
    int days;

    std::cout << "Enter year: ";
    std::cin >> year;

    std::cout << "Enter month: ";
    std::cin >> month;

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

    if (calenderType == "leap year" && month == 2){
        days = 29;
    }
    else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8
	||month == 10 || month ==12 and calenderType == "leap year"){
        days = 31;
    }
    else if (calenderType == "common year" && month == 2){
        days = 28;
    }
    else{
        days = 30;
    }

    std::cout << days << " days in " << month << "/" << year << "\n";

}