//**C program to convert string into lowercase and uppercase without using library function.

#include <iostream>
int main()
{
    char str[20];

    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(str, 20);

    for (int i = 0; str[i] != '\0'; i++)//* changing in uppercase
    {
        if (str[i] >= 'a' || str[i] >= 'A' && str[i] <= 'z' || str[i] <= 'Z')
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 0x20;
            }
        }
    }

    std::cout << "STRING IN UPPERCASE: " << std::endl
              << str << std::endl;

    for (int i = 0; str[i] != '\0'; i++)//* changing in lowercase
    {
        if (str[i] >= 'a' || str[i] >= 'A' && str[i] <= 'z' || str[i] <= 'Z')
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 0x20;
            }
        }
    }

    std::cout << "STRING IN LOWERCASE: " << std::endl
              << str << std::endl;

    return (0);
}