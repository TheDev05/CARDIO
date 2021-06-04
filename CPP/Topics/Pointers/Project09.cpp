//**Program to count vowels and consonants in a string using pointer.

#include <iostream>

void count(char *p, int *vowel, int *cons)
{
    for (int i = 0; *(p + i) != '\0'; i++)
    {
        if (*(p + i) >= 'a' && *(p + i) <= 'z' || *(p + i) >= 'A' && *(p + i) <= 'Z')
        {
            ((*(p + i) >= 'A' && *(p + i) <= 'Z') ? *(p + i) = *(p + i) + 0x20 : *(p + i) = *(p + i));

            if (*(p + i) == 'a' || *(p + i) == 'e' || *(p + i) == 'i' || *(p + i) == 'o' && *(p + i) == 'u')
            {
                (*vowel)++;
            }
            else
                (*cons)++;
        }
    }
}

int main()
{
    char sen[20];

    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(sen, 20);

    int vowel = 0, cons = 0;

    count(sen, &vowel, &cons);

    std::cout << "VOWELS: " << vowel << std::endl
              << "CONSONANT: " << cons << std::endl;
    return (0);
}