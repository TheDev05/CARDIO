//**C program to extract a portion of string (Substring Extracting in C).

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

    std::cout << "ENTER A STRING: " << std::endl;
    std::cin.getline(str, 20);

    int to, from;
    int count = len(str);

    std::cout << "ENTER INDEX OF EXTRACTING FROM: " << std::endl;
    std::cin >> from;

    std::cout << "ENTER INDEX OF EXTRACTING TO: " << std::endl;
    std::cin >> to;

    if ((to >= 0 || from >= 0) && (to <= count || from <= count))
    {
    }

    else

    {
        std::cout << "INVALID DATA ENTEDRED!" << std::endl
                  << "ERROR ENCOUNTERED: " << std::endl;
        return (0);
    }

    std::cout << "ORIGINAL STRING: " << std::endl
              << str << std::endl;

    std::cout << "STRING AFTER EXTRACTION: " << std::endl;
    for (int i = from; i < to + 1; i++)
    {
        std::cout << str[i];
    }

    return (0);
}