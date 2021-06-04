//**C program to find the frequency of a character in a string.

//**METHOD:01**USING SAME CHAR ARAY..HERE OUR MAIN ARRAY GET DESTROYRD

// #include <iostream>

// int main()
// {
//     char str[20];

//     std::cout << "ENTER YOUR STRING: " << std::endl;
//     std::cin.getline(str, 20);

//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         int count = 1;
//         for (int j = i + 1; str[j] != '\0'; j++)
//         {
//             if (str[i] == str[j] && str[i] != '*')
//             {
//                 count++;
//                 str[j] = '*';
//             }
//         }
//         if (str[i] != '*' && str[i] != ' ')
//         {
//             std::cout << str[i] << " OCCURS TOTAL: " << count << std::endl;
//         }
//     }

//     return (0);
// }

//**METHOD:01**USING OTHER CHAR ARAY..HERE OUR MAIN ARRAY GET STILL IN PREV CONDITION

#include <iostream>

int main()
{
    char str[20];
    int res[20] = {0};

    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(str, 20);

    for (int i = 0; str[i] != '\0'; i++)
    {
        int count = 1;
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
                res[j] = -1;
            }
        }

        if (res[i] != -1 && str[i] != ' ')
        {
            std::cout << str[i] << " OCCURS TOTAL: " << count << std::endl;
        }
    }

    return (0);
}