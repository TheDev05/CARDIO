//** PRINT INDESINIETLY ANY STRING NO MATTER WHAT IS TYPE OR ENTERED.
//** PRINT NOOB CODER

#include <iostream>
#include <conio.h>

int main()
{
    char input, str[] = "NOOB CODER";
    int i = 0;

    std::cout << "TYPE SOMETHING: " << std::endl;

    while (1)
    {
        getch();
        std::cout << str[i];
        i++;

        if (i == 10)
        {
            std::cout << " ";
            i = 0;
        }
    }

    return (0);
}