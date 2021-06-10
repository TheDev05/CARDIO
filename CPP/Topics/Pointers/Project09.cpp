//**Program to count vowels and consonants in a string using pointer.

// #include <iostream>

// void count(char *p, int *vowel, int *cons)
// {
//     for (int i = 0; *(p + i) != '\0'; i++)
//     {
//         if (*(p + i) >= 'a' && *(p + i) <= 'z' || *(p + i) >= 'A' && *(p + i) <= 'Z')
//         {
//             ((*(p + i) >= 'A' && *(p + i) <= 'Z') ? *(p + i) = *(p + i) + 0x20 : *(p + i) = *(p + i));

//             if (*(p + i) == 'a' || *(p + i) == 'e' || *(p + i) == 'i' || *(p + i) == 'o' && *(p + i) == 'u')
//             {
//                 (*vowel)++;
//             }
//             else
//                 (*cons)++;
//         }
//     }
// }

// int main()
// {
//     char sen[20];

//     std::cout << "ENTER YOUR STRING: " << std::endl;
//     std::cin.getline(sen, 20);

//     int vowel = 0, cons = 0;

//     count(sen, &vowel, &cons);

//     std::cout << "VOWELS: " << vowel << std::endl
//               << "CONSONANT: " << cons << std::endl;
//     return (0);
// }

// ********************************************************************************************************************************************
// *RIVISON

#include <iostream>
int main()
{
    char text[20];
    std::cout << "ENTER YOUR TEXT: " << std::endl;
    std::cin.getline(text, 20);

    int vowel, cons;
    vowel = cons = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] = text[i] + 0x20;
        }

        if (text[i] >= 'a' && text[i] <= 'z')
        {
            if (text[i] == 'a' || text[i] == 'e' || text[i] == 'o' || text[i] == 'i' || text[i] == 'u')
            {
                vowel++;
            }
            else
                cons++;
        }
    }

    std::cout << "VOWELS: " << vowel << std::endl
              << "CONSONANT: " << cons << std::endl;
    return (0);
}