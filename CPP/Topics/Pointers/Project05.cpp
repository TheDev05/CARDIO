//**C++ Program To Print Address Of Pointer Of An Array Using Pointer

#include <iostream>

void address(int *p, int count)
{
    for (int i = 0; i < count; i++)
    {
        std::cout << (p + i) << std::endl;
    }
}

int main()
{
    int num[20], count;

    std::cout << "ENTER INPUT LIMIT: " << std::endl;
    std::cin >> count;


    address(num, count);
    return (0);
}