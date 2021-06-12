//*Default argument*

#include <iostream>

void add(int x, int y, int z = 0)
{
    std::cout << "SUM: " << (x + y + z) << std::endl;
}

int main()
{

    int num1 = 3, num2 = 4, num3 = 5;

    add(num1, num2);
    add(num1, num3);
    add(num1, num2, num3);

    return (0);
}