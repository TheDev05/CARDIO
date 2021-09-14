//*C program to remove alphabets from an alphanumeric string.

#include <iostream>

int len(char *p)
{
    int i;
    for (i = 0; *(p + i) != '\0'; i++)
    {
    }
    return (i);
}

int main()
{
    char str[20];

    std::cout << "ENTER YOUR ALPHANUMERIC STRING: " << std::endl;
    std::cin.getline(str, 20);

    int count = len(str);

    for (int i = 0; i < count; i++)
    {
        if ((str[i] >= 'a' || str[i] >= 'A') && (str[i] <= 'z' || str[i] <= 'Z'))
        {
            int res_i = i;
            while (i < count)
            {
                str[i] = str[i + 1];
                i++;
            }
            count--;
            i = res_i - 1;
        }
    }

    std::cout << "STRING AFTER REMOVAL OF ALPHABETS: " << std::endl
              << str;
    return (0);
}