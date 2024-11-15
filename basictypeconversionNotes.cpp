#include <iostream>

// implicit = automatic
// explicit = precede value with new data type

int main(){

   // double x = (int)3.14;
    // integers can only hold a whole number, not a decimal like a double

  //  std::cout << x;
    
    int correct = 8;
    int total = 10;
   // double score = correct/total * 100; (this does not work since integer division can be in decimals)
    double score = (double)correct/total * 100;

    std::cout << score << "%";

    return 0;
}