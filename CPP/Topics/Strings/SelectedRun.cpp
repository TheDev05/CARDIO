#include <iostream>
#include <vector>

int main()
{
    char str[50][20];
    int strings;

    std::cout << "INPUT LIMIT OF STRINGS: " << std::endl;
    std::cin >> strings;

    fflush(stdin);
    // std::cin.sync();

    std::cout << "ENTER YOUR STRING: " << std::endl;
    for (int i = 0; i < strings; i++)
    {

        std::cout << "String " << i + 1 << " : ";
        std::cin.getline(str[i], 20);
    }

    std::cout << "STRINGS GIVEN AS, " << std::endl;
    for (int i = 0; i < strings; i++)
    {

        std::cout << "String " << i << " : " << str[i] << std::endl;
    }

    return (0);
}