//**C program to convert a string to sentence case.
//** SEN CASE: FIRST LETTER (OR LETTER AFTER FULL STOP) SHOULD BE IN UPPERCASE

#include <iostream>

int main()
{
    char str[20];

    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(str, 20);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (i == 0)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 0x20;
            }
            else if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 0x20;
            }
        }

        if (str[i] == '.')
        {

            for (int j = i; str[j] != '\0'; j++)
            {
                if (str[j] >= 'a' && str[j] <= 'z')
                {
                    str[j] = str[j] - 0x20;
                    break;
                }
                else if (str[j] >= 'A' && str[j] <= 'Z')
                {
                    str[j] = str[j] + 0x20;
                    break;
                }
            }
        }
    }

    std::cout << "AFTER CONVERTING IN SEN CASE: " << std::endl
              << str << std::endl;
    return (0);
}