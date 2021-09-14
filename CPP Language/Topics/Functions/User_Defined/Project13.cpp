//**C program to pass an array of strings to a function.

#include <iostream>
#define colu 20

void show_string(char str[][colu])
{
    int row;

    std::cout << "ENTER ROW NUMBER: " << std::endl;
    std::cin >> row;

    std::cout << str[row];
    return;
}

int main()
{
    char str[5][colu];

    for (int i = 0; i < 5; i++)
    {

        std::cout << "ENTER 0" << i << " STRING: ";
        std::cin.getline(str[i], colu);
    }

    show_string(str);
    return (0);
}