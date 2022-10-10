//**C++ Program To Display Sring From Backward

// #include <iostream>
// #include <cstring>

// int main()
// {
//     char sen[20];

//     std::cout << "ENTER YOUR STRING" << std::endl;
//     std::cin.getline(sen, 20);

//     int count = strlen(sen);

//     std::cout << "OUTPUT: " << std::endl;

//     for (int i = count - 1; i >= 0; i--)
//     {
//         std::cout << sen[i];
//     }

//     return (0);
// }

// ********************************************************************************************************************************************
// *RIVISON

#include <iostream>

int len(char *p)
{
    int i;
    for (i = 0; *(p + i) != '\0'; i++)
        ;

    return (i);
}

void reverse(char *p)
{
    int count = len(p);
    for (int i = count - 1; i >= 0; i--)
    {
        std::cout << *(p + i);
    }
}

int main()
{
    char text[20];
    std::cout << "ENTER YOUR XTRING:  " << std::endl;
    std::cin.getline(text, 20);

    reverse(text);
    return (0);
}