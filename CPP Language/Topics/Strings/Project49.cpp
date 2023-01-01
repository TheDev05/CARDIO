//**C program to split string by space into words.
//**(using newline character)

// #include <iostream>

// int main()
// {
//     char str[20];

//     std::cout << "ENTER YOUR STRING: " << std::endl;
//     std::cin.getline(str, 20);

//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] == ' ')
//         {
//             str[i] = '\n';
//         }
//     }

//     std::cout << str << std::endl;

//     return (0);
// }

// **WITHOUT USING NEWLINE CHARACTER**

#include <iostream>

int main()
{
    char str[20], res[10][20];

    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(str, 20);

    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {

        if (i == 0)
        {
            int k = 0;

            while (str[i] != ' ')
            {
                res[j][k] = str[i];
                i++;
                k++;
            }
            res[j][k] = '\0';
            i = i - 1;
            j++;
        }

        if (str[i] == ' ')
        {
            int k = 0;
            i = i + 1;

            while (str[i] != ' ' && str[i] != '\0')
            {
                res[j][k] = str[i];
                k++;
                i++;
            }
            res[j][k] = '\0';
            i = i - 1;
            j++;
        }
    }

    std::cout << "AFTER SPLITTING FROM BLANK SPACES: " << std::endl;
    for (int i = 0; i < j + 1; i++)
    {
        std::cout << res[i] << std::endl;
    }

    return (0);
}
