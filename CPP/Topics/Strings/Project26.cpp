//**C program to read a string and print the length of the each word.

#include <iostream>

int main()
{
    char str[40];
    int word_count = 1;

    std::cout << "ENTER A STRING: " << std::endl;
    std::cin.getline(str, 40);

    for (int i = 0; str[i] != '\0'; i++)
    {
        int count = 0;

        if (i == 0)
        {

            while (str[i] != ' ')
            {
                count++;
                i++;
            }
            i = i - 1;
            std::cout << "01 WORD IS OF COUNT: " << count << std::endl;
        }

        if (str[i] == ' ')
        {
            word_count++;
            i = i + 1;

            while (str[i] != ' ' && str[i] != '\0')
            {
                count++;
                i++;
            }
            i = i - 1;
            std::cout << "0" << word_count << " WORD IS OF COUNT: " << count << std::endl;
        }
    }

    return (0);
}