#include <iostream>
#include <cmath>

int main()
{
    double a;
    double b;
    double c;

    std::cout << "Enter leg a:";
    std::cin >> a;

    std::cout << "Enter leg b:";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    std::cout << "The hypotenuse is " << c;

    return 0;
}