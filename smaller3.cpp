#include <iostream>

int main()
{
    int firstnum;
    int secondnum;
    int thirdnum;
    int smallernum;

    std::cout << "Enter your first number: ";
    std::cin >> firstnum;

    std::cout << "Enter your second number: ";
    std::cin >> secondnum;

    std::cout << "Enter your third number: ";
    std::cin >> thirdnum;
    
    if(firstnum < secondnum && firstnum < thirdnum){
        smallernum = firstnum;
    }
    else if(secondnum < firstnum && secondnum < thirdnum){
        smallernum = secondnum;
    }
    else{
        smallernum = thirdnum;
    }
    std::cout << "The smaller number from the three numbers given is " << smallernum << "\n";
}
