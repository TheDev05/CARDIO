//**PROGRAM TO CREATE A AUTOMATIC CHAT/ REPLY BOT.

#include <iostream>

int main()
{
    char str[10][20] = {{"HEllo There!"}, {"Whats Your Name?"}, {" "}, {"How are you?"}, {" "}, {"Nice to meet you"}, {" "}, {"Thank You!"}};
    char name[10] = " ", input[20];

    for (int i = 0; i < 8; i++)
    {
        if (i % 2 != 0 || i == 0)
        {
            std::cout << str[i] << " " << name << std::endl;
        }
        else
        {

            if (i == 2)
            {
                std::cin >> name;
            }
            else
            {
                fflush(stdin);
                std::cin.getline(input, 20);
            }
        }
    }

    return (0);
}
