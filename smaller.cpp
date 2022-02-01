#include <iostream>

int main()
{

    // initalize our int variables
    int firstnum;
    int secondnum;
    int smallernum;

    std::cout << "Hi! Please enter a number: ";
    std::cin >> firstnum;

    std::cout << "Awesome, now enter another number : ";
    std::cin >> secondnum;

    // use an if to see which is bigger and print it out
    if(firstnum < secondnum){
        smallernum = firstnum;
    }
    else{
        smallernum = secondnum;
    }
    std::cout << "The smaller number of the two given is " << smallernum << "\n";
    
    return 0;
}