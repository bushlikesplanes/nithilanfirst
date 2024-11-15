#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

namespace third{
    int x = 3;
}
int main() {
    
    using namespace first;
    std::cout << x << second::x << third::x;


    return 0;

}