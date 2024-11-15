#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char op;
    double num1;
    double num2;
    double result;

    cout << "********** CALCULATOR **********\n";

    cout << "Enter operator (+ - * /)";
    cin >> op;

    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter number 2: ";
    cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            cout << "Result: " << result << '\n';
            break;
        default:
            cout << "Please enter a valid number or operator!\n";
    }

    cout << "********************************";

return 0;
}