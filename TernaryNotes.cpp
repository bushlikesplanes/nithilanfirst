#include <iostream>
#include <cmath>

int main()
{
    // *ternary operator ?
    // *condition ? expression1 : expression2;
    // *expression1 will be done if true, expression2 will be done if false
    double grade;

    std::cout << "What is your grade (%)? ";
    std::cin >> grade;

    grade >= 60 ? std::cout << "You Pass!" : std::cout << "You Fail!";

    return 0;
}