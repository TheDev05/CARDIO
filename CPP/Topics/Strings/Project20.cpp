//**C program to print indexes of a particular character in a string.

#include <iostream>
int main()
{
    char str[20];

    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(str, 20);

    char find;
    std::cout << "ENTER THE CHARACTER YOU WANNA FIND: " << std::endl;
    std::cin >> find;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (find == str[i])
        {
            std::cout << "FOUND AT INDEX: " << i << std::endl;
        }
    }

    return (0);
}