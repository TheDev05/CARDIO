//**Program to read array elements and print with addresses.

#include <iostream>

void show_value(int *p, int count)
{
    for (int i = 0; i < count; i++)
    {
        std::cout << *(p + i) << " = " << (p + i) << std::endl;
    }
    return;
}

int main()
{
    int count;
    std::cout << "ENTER INPUT LIMIT: " << std::endl;
    std::cin >> count;

    int num[count];
    std::cout << "ENTER ARRAY ELEMENTS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    show_value(num, count);

    return (0);
}