// **C program to print string one by one characters using loop.

#include <iostream>
#include <cstring>

int main()
{
    char str[20];
    int count;

    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(str, 20);

    count = strlen(str);

    for (int i = 0; i < count; i++)
    {
        std::cout << str[i];
    }

    return (0);
}

// ********************************************************************************************************************************************
// *RIVISON

// #include <iostream>
// int main()
// {
//     char text[20];
//     std::cout << "ENTER YOUR STRING: " << std::endl;
//     std::cin.getline(text, 20);

//     while
// }