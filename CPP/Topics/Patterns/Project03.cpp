/*C program to print following Pyramid:
*****
****
***
**
*
*/

#include <iostream>

int main()
{
    char input[10] = "*****";

    for (int i = 4; i >= 0; i--)
    {
        for (int j = 0; j < i + 1; j++)
        {
            std::cout << input[i] << " ";
        }

        std::cout << std::endl;
    }

    return (0);
}