/*C program to print following Pyramid:
*
**
***
****
*****
*/

#include <iostream>

int main()
{
    char input[10] = "*****";

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            std::cout << input[j] << " ";
        }
        std::cout << std::endl;
    }

    return (0);
}