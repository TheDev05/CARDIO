//** C program to print following pattern.
// H
// He
// Hel
// Hell
// Hello

#include <iostream>

int main()
{
    char str[] = "Hello";
    int count = 1;

    // int i = 0;
    // while (i < count && count < 6)
    // {
    //     std::cout << str[i];

    //     i++;
    //     if (count == i)
    //     {
    //         std::cout << std::endl;
    //         count++;
    //         i = 0;
    //     }
    // }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            std::cout << str[j];
        }

        std::cout << std::endl;
    }
}
