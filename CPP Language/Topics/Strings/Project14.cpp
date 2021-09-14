//**C program to toggle case of all characters of string.

// #include <iostream>

// int main()
// {
//     char str[20];

//     std::cout << "ENTER YOUR STRING: " << std::endl;
//     std::cin.getline(str, 20);

//     for (int i = 0; str[i] != '\0'; i++)
//     {

//         if ((str[i] >= 'a' || str[i] >= 'A') && (str[i] <= 'z' || str[i] <= 'Z'))
//         {
//             if (str[i] >= 'A' && str[i] <= 'Z')
//             {
//                 str[i] = str[i] + 32;
//             }

//             else
//             {
//                 str[i] = str[i] - 32;
//             }
//         }
//         else
//             std::cout << "BLANK";

//         std::cout << i;
//     }

//     std::cout << "AFTER TOGGLING: " << str << std::endl;
//     return (0);
// }

// ********************************************************************************************************************************************
// *RIVISON
//TODO: IMPORTANT : UNDERSTANAD THE CONCEPT OF KEY HERE:

#include <iostream>
int main()
{
    char text[20];
    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(text, 20);

    for (int i = 0; text[i] != '\0'; i++)
    {
        int key = 0;

        if (text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = text[i] - 0x20;
            key = 1;
        }

        if (text[i] >= 'A' && text[i] <= 'Z' && key != 1)
        {
            text[i] = text[i] + 0x20;
        }
    }

    std::cout << "AFTER TOGGLING: " << text << std::endl;
    return (0);
}