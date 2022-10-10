//**C program to capitalize first character of each word in a string.

// #include <iostream>

// int main()
// {
//     char str[20];

//     std::cout << "ENTER YOUR STRING: " << std::endl;
//     std::cin.getline(str, 20);

//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if ((i == 0) && (str[i] >= 'a') && (str[i] <= 'z'))
//         {
//             str[i] = str[i] - 32;
//         }

//         if ((str[i] == ' ') && (str[i + 1] >= 'a') && (str[i + 1] <= 'z'))
//         {
//             str[i + 1] = str[i + 1] - 32;
//             std::cout << str[i + 1];
//         }
//     }

//     std::cout << "AFTER CAPITALIZATION OF FIRST WORDS OF STRING: " << std::endl
//               << str
//               << std::endl;

//     return (0);
// }

// ********************************************************************************************************************************************
// *RIVISON
//TODO: IMPORTANT : KEY TERM

// #include <iostream>
// int main()
// {
//     char text[20];
//     std::cout << "ENTER YOUR STRING: " << std::endl;
//     std::cin.getline(text, 20);

//     for (int i = 0; text[i] != '\0'; i++)
//     {
//         int key = 0;

//         if (i == 0)
//         {
//             text[i] = (text[i] >= 'a' && text[i] <= 'z') ? text[i] = text[i] - 0x20 : text[i];
//         }

//         while (text[i] == ' ')// if user input two or more blanks then this works too.
//         {
//             i++;
//             key = 1;
//         }

//         if (text[i] >= 'a' && text[i] <= 'z' && key == 1)
//         {
//             text[i] = text[i] - 0x20;
//         }
//     }

//     std::cout << "TEXT: " << text << std::endl;
//     return (0);
// }

// ?********************************************************************************************************
#include <iostream>
#include <cctype>

int main()
{
    std::string s;
    std::getline(std::cin, s);

    if (islower(s[0]))
    {
        s[0] = s[0] - 0x20;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (isblank(s[i]) && islower(s[i + 1]))
        {
            s[i + 1] = s[i + 1] - 0x20;
        }
    }

    std::cout << s << '\n';
}