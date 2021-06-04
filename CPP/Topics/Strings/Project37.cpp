//**Capitalize first and last letter of each word in a line
//**RIVISE NEEDED

#include <iostream>

int main()
{
    char str[20];

    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(str, 20);

    for (int i = 0; str[i] != '\0'; i++)
    {
        int index = 0;
       

        if (i == 0)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
                continue;

            str[i] = str[i] - 0x20;

            while (str[i] != ' ')
            {
                index++;
                i++;
            }
            i = i - 1;
            if (index == 1)
            {
                continue;
            }

            str[i] = str[i] - 0x20;
        }

        if (str[i] == ' ')
        {
            i = i + 1;

            if (str[i] >= 'A' && str[i] <= 'Z')
                continue;

            str[i] = str[i] - 0x20;

            while (str[i] != ' ' && str[i] != '\0')
            {
                index++;
                i++;
            }
            i = i - 1;
            if (index == 1)
            {
                continue;
            }

            str[i] = str[i] - 0x20;
        }
    }

    std::cout << "OUTPUT STRING: " << str << std::endl;
    return (0);
}