/*C program to print following Pyramid:
        *
       * *
      * * *
     * * * *
    * * * * *
    * * * * *
     * * * *
      * * *
       * *
        *
*/

#include <iostream>

int main()
{
    char input[10] = "*****";
    int blank = 4;

    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < blank; k++)
        {
            std::cout << " ";
        }
        blank--;
        for (int j = 0; j < i + 1; j++)
        {
            std::cout << input[j] << " ";
        }

        std::cout << std::endl;
    }

    blank = 0;

    for (int i = 4; i >= 0; i--)
    {
        for (int k = 0; k < blank; k++)
        {
            std::cout << " ";
        }
        blank++;

        for (int j = 0; j < i + 1; j++)
        {
            std::cout << input[j] << " ";
        }

        std::cout << std::endl;
    }
    return (0);
}