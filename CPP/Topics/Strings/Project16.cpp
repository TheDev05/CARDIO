// //** C program to find occurrence of a character in the string.

// #include <iostream>

// int main()
// {
//     char str[20];

//     std::cout << "ENTER YOUR STRING: " << std::endl;
//     std::cin.getline(str, 20);

//     char find;
//     std::cout << "ENTER THE CHARACTER YOU WANNA FIND: " << std::endl;
//     std::cin >> find;

//     int count = 0;

//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (find == str[i])
//         {
//             count++;
//         }
//     }

//     std::cout << find << " OCCURS TOTAL " << count << " TIMES. " << std::endl;
//     return (0);
// }

// ********************************************************************************************************************************************
// *RIVISON

#include <iostream>
int main()
{
    char text[20];
    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(text, 20);

    char find;
    std::cout << "ENTER THE CHARACTER U WANNNA FIND: " << std::endl;
    std::cin >> find;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (find == text[i])
        {
            std::cout << find << " FOND AT INDEX: " << i << std::endl;
        }
    }

    return (0);
}