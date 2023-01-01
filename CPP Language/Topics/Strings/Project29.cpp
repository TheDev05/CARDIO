//**C program to read n strings and print each string's length.

#include <iostream>
#define col 20

int main()
{
    char str[20][col];
    int row;

    std::cout << "ENTER YOUR STRING LIMIT" << std::endl;
    std::cin >> row;

    fflush(stdin);

    std::cout << "ENTER " << row << " STRINGS: " << std::endl;
    for (int i = 0; i < row; i++)
    {

        std::cin.getline(str[i], col);
    }

    for (int i = 0; i < row; i++)
    {
        int length = 0;
        for (length = 0; str[i][length] != '\0'; length++)
        {
        }

        std::cout << "STRING " << i + 1 << " HAVE LANGTH: " << length << std::endl;
    }

    return (0);
}