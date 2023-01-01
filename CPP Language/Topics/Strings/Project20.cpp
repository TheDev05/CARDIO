//**C program to print indexes of a particular character in a string.

// #include <iostream>
// int main()
// {
//     char str[20];

//     std::cout << "ENTER YOUR STRING: " << std::endl;
//     std::cin.getline(str, 20);

//     char find;
//     std::cout << "ENTER THE CHARACTER YOU WANNA FIND: " << std::endl;
//     std::cin >> find;

//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (find == str[i])
//         {
//             std::cout << "FOUND AT INDEX: " << i << std::endl;
//         }
//     }

//     return (0);
// }

// ********************************************************************************************************************************************
// *RIVISON
// PRINTING INDICES OF ALL CHARACTERS:

// #include <iostream>
// int main()
// {
//     char text[20];
//     std::cout << "ENTER YOUR STRING:  " << std::endl;
//     std::cin.getline(text, 20);

//     for (int i = 0; text[i] != '\0'; i++)
//     {
//         std::cout << "text[" << i << "]: " << text[i] << std::endl;
//     }

//     return(0);
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
    std::cout << "ENTER THE CHARACTER U WANNA FIND: " << std::endl;
    std::cin >> find;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (find == text[i])
        {
            std::cout << "INDEX: " << i << std::endl;
            return (0);
        }
    }
}