//**C++ Program To Check String Is Palindrome Or Not

// #include <iostream>
// #include <cstring>

// int main()
// {
//     char sen[20];

//     std::cout << "ENTER A STRING: " << std::endl;
//     std::cin.getline(sen, 20);

//     int count = strlen(sen);

//     int key = 0;

//     for (int i = 0; i < count / 2; i++)
//     {
//         if (sen[i] == sen[count - 1 - i])
//         {
//             key++;
//         }
//     }

//     if (key == count / 2)
//         std::cout << "\"" << sen << "\""
//                   << " IS PALINDROME.";

//     else
//         std::cout << "\"" << sen << "\""
//                   << " IS NOT A PALINDROME.";

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

int check_palin(char *p)
{
    int count = len(p);

    for (int i = 0; i < count / 2; i++)
    {
        if (*(p + i) != *(p + count - 1 - i))
        {
            return (0);
        }
    }

    return (1);
}

int main()
{
    char text[20];
    std::cout << "ENTER YOUR STRING:  " << std::endl;
    std::cin.getline(text, 20);

    if (check_palin(text))
        std::cout << "STRING IS PALINDROME " << std::endl;
    else
        std::cout << "STRING IS NOT PALINDROME " << std::endl;

    return (0);
}