//**C++ Program To Find Number Is Even / Odd Using Pointer

#include <iostream>

void check(int *p)
{
    if (*p % 2 == 0)
    {
        std::cout <<*p << " IS EVEN." << std::endl;
    }
    else
        std::cout <<*p << " IS ODD.";
}

int main()
{
    int num;

    std::cout << "ENTER YOUR NUMBER: " << std::endl;
    std::cin >> num;

    check(&num);
    return (0);
}