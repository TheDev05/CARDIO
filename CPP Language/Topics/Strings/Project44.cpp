//**C program to check whether a substring is present in a given string.
//**RIVISE NEEDED

#include <iostream>

int strlen(char *p)
{
    int i;
    for (i = 0; *(p + i) != '\0'; i++)
    {
    }
    return (i);
}

int main()
{
    char str[20], find[20];

    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(str, 20);

    std::cout << "ENTER THE STRING YOU WANNA SEARCH: " << std::endl;
    std::cin.getline(find, 20);

    int count1 = strlen(str), count2 = strlen(find), found = 0;

    for (int i = 0; i < count2; i++)
    {
        for (int j = 0; j < count1; j++)
        {
            int key = 0;
            if (find[i] == str[j])
            {
                while (i < count2)
                {
                    if (find[i] == str[j])
                    {
                        key++;
                    }
                    i++;
                    j++;
                }

                if (key == count2)
                {
                    found = 1;
                    std::cout << find << " FOUND IN STRING." << std::endl;
                    break;
                }

                j = j - 1;
                i = 0;
            }
        }
        break;
    }

    if (found == 0)

        std::cout << find << " NOT FOUND IN STRING";

    return (0);
}
