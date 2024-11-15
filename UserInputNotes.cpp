#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main(){

    std::string name;
    int age;
  
    //std::cout << "What's your name?: "; // This will not work if you use spaces in the answer, to do that you must use std::getline
    //std::cin >> name;

    std::cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "How old are you?: ";
    std::cin >> age;

    std::cout << "Hello " << name << '.' << '\n';
    std::cout << "You are " << age << " years old.";

    return 0;
}