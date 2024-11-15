#include <iostream>

int main()
{
    // if statements do something if a condition is true

    int age;

    std::cout << "what is your age? ";
    std::cin >> age;

    if(age <= 18){
        std::cout << "You are less than 18.";
    }
    else if(age >=18){
        std::cout << "You are older than 18.";
    }
    else if(age >= 100){
        std::cout << "You are really old!";
    }
    else{
        std::cout << "You are not old enough to enter.";
    }

    return 0;
}