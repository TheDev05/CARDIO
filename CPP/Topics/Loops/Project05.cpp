//**C++ Program Convert Decimal Number To Binary Number Using Loop

#include <iostream>

int main()
{
    int num, count, rem[10];

    std::cout << "ENTER YOUR NUMBER: " << std::endl;
    std::cin >> num;

    for (int i = 0; num >= 1; i++)
    {
        rem[i] = num % 2;
        num = num / 2;
        count = i;
    }

    for (int j = 0; j <= count; j++) //? IMPORTANT COUNT IS ALSO INCLUDED 
    {
        std::cout << rem[j];
    }
    return (0);
}