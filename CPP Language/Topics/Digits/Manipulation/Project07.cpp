//**C Program to print total occurrence of a particular digit in a number.

#include <iostream>

int find_occurence(int num, int find)
{

    int rem, count = 0;
    for (int i = 0; num != 1; i++)
    {
        rem = num % 10;

        if (rem == find)
        {
            count++;
        }

        num = num / 10;
    }

    return (count);
}

int main()
{
    int num;

    std::cout << "ENTER YOUR NUMBER: " << std::endl;
    std::cin >> num;

    int find;

    std::cout << "ENTER NUMBER YOU WANNA FIND: " << std::endl;
    std::cin >> find;

    std::cout << find << " OCCURS TOTAL " << find_occurence(num, find) << " TIMES";
    return (0);
}