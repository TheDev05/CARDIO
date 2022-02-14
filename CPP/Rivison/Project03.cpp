// Default arguments

#include <iostream>

int add(int, int, int = 0);
int sub(int, int);

int main()
{
    int val1, val2;

    std::cout << "Enter two values: " << '\n';
    std::cin >> val1 >> val2;

    std::cout << add(val1, val2) << '\n';
    std::cout << add(val1, val2, val1) << '\n';

    std::cout << sub(val1, val2) << '\n';
    std::cout << sub(val2, add(val1, val2)) << '\n';

    return (0);
}

int add(int x, int y, int z)
{
    return (x + y + z);
}

int sub(int x, int y)
{
    return (y - x);
}