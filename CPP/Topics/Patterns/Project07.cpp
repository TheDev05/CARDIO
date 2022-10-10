/*C program to print following Pyramid:
        0
       01
      010
     0101
    01010
*/

#include <iostream>

int main()
{
    char num[] = "01010";
    int p, res_p = 5;

    for (int i = 0; i < 5; i++)
    {
        p = res_p - 1;
        for (int j = 0; j < i + 1; j++)
        {
            while (p != 0)
            {
                std::cout << " ";
                p--;
            }

            std::cout << num[j];
        }
        res_p--;
        std::cout << std::endl;
    }

    return (0);
}