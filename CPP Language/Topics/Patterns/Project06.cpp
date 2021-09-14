/*C program to print following Pyramid:
    **********
    ****  ****
    ***    ***
    **      **
    *        *
*/

#include <iostream>
int main()
{
    char input = '*';
    int p = 4, q = 2, count = 10;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= count; j++)
        {
            std::cout << input;

            if (j == p && i != 1)
            {
                for (int k = 1; k <= q; k++)
                {
                    std::cout << " ";
                }

                p = p - 1;
                j = j + q;
                q = q + 2;
            }
        }
        std::cout << std::endl;
    }

    return (0);
}