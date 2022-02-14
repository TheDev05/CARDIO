//**C++ Program To Swap Two Numbers Without Using Third Variable Using Functions

#include <iostream>
void swap(int *, int *);

int main()
{
    int num1, num2;

    std::cout << "ENTER 2 NUMBERS: " << std::endl;
    std::cin >> num1 >> num2;

    std::cout << "YOU ENTERED: " << std::endl
              << "NUM1: " << num1 << std::endl
              << "NUM2: " << num2 << std::endl;

    swap(&num1, &num2);

    std::cout << "AFTER SWAPPING: " << std::endl
              << "NUM1: " << num1 << std::endl
              << "NUM2: " << num2 << std::endl;

    return (0);
}

void swap(int *p1, int *p2)
{
    *p1 = *p1 * (*p2);
    *p2 = *p1 / (*p2); //? our a get changed so first find b then usidng b find a
    *p1 = *p1 / (*p2);
}