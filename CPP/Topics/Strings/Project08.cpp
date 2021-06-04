//**C++ Program To Display Sring From Backward

#include <iostream>
#include <cstring>

int main()
{
    char sen[20];

    std::cout << "ENTER YOUR STRING" << std::endl;
    std::cin.getline(sen, 20);

    int count = strlen(sen);

    std::cout << "OUTPUT: " << std::endl;

    for (int i = count - 1; i >= 0; i--)
    {
        std::cout << sen[i];
    }

    return (0);
}