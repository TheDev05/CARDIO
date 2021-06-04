/*C program to print following Pyramid:
    12345
    1234
    123
    12
    1
*/

#include <iostream>

int main()
{
    char input[] = "12345";

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << input[j];
        }

        std::cout << std::endl;
    }

    return (0);
}