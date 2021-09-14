// **C++ Program To Swap Two Number Without Using Third Variable

#include <iostream>

int main()
{
    int a, b;
    std::cout << "ENTER TWO NUMBERS: " << std::endl;
    std::cin >> a >> b;

    // a = a * b;
    // b = a / b;//? our a get changed so first find b then usidng b find a
    // a = a / b;

    a = a + b;
    b = a - b; //? our a get changed so first find b then usidng b find a
    a = a - b;
    
    std::cout << "a: " << a << std::endl
              << "b: " << b << std::endl;

    return (0);
}
