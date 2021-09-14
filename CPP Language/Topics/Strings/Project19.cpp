//**C program to print following pattern.
// Hello
// Hell
// Hel
// He
// H

// #include <iostream>

// int main()
// {
//     char str[] = "Hello";

//     int count;

//     for (count = 0; str[count] != '\0'; count++)
//     {
//     }

//     for (int i = count - 1; i >= 0; i--)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             std::cout << str[j];
//         }

//         std::cout << std::endl;
//     }

//     return (0);
// }

//*******************************************************************************************************************************************
//**RIVISON**

// #include <iostream>

// int main()
// {
//     char input[] = "*****";

//     int count;
//     for (count = 0; input[count] != '\0'; count++)
//     {
//     }

//     for (int i = count - 1; i >= 0; i--)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             std::cout << input[j] << " ";
//         }
//         std::cout << std::endl;
//     }

//     return (0);
// }

// ********************************************************************************************************************************************
// *RIVISON

#include <iostream>
int main()
{
    char text[6] = "Hello";

    for (int i = 4; i >= 0; i--)
    {
        for (int j = 0; j < i + 1; j++)
        {
            std::cout << text[j];
        }

        std::cout << std::endl;
    }

    return (0);
}