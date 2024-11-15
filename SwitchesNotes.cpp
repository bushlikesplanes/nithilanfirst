#include <iostream>

int main()
{
    char grade;

    std::cout << "What is your letter grade: ";
    std::cin >> grade;

    switch (grade)
    {
    case 'A':
        std::cout << "You got a 90% or better \n";
        break;
    case 'B':
        std::cout << "You got a 80%-90% \n";
        break;
    case 'C':
        std::cout << "You got a 70%-80% \n";
        break;
    case 'D':
        std::cout << "You got less than a 60% \n";
        break;
    case 'F':
        std::cout << "YOU FAILED! \n";
        break;
    default:
        std::cout << "Please only enter a letter grade (A-F) next time. \n";
    }

    int month;

    std::cout << "What month were you born? (1-12)";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "January";
        break;
    case 2:
        std::cout << "February";
        break;
    case 3:
        std::cout << "March";
        break;
    case 4:
        std::cout << "April";
        break;
    case 5:
        std::cout << "May";
        break;
    case 6:
        std::cout << "June";
        break;
    case 7:
        std::cout << "July";
        break;
    case 8:
        std::cout << "August";
        break;
    case 9:
        std::cout << "September";
        break;
    case 10:
        std::cout << "October";
        break;
    case 11:
        std::cout << "November";
        break;
    case 12:
        std::cout << "December";
        break;
    default:
        std::cout << "Please enter a number between 1-12.";
    }

    return 0;
}