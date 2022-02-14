/*
C program to print following pyramid:
    A
   BAB
  CBABC
 DCBABCD
EDCBABCDE
*/

#include <iostream>

int main()
{
    char input[] = "EDCBABCDE";
    int blank_count = 4;
    int index = 4, res_index = index;
    int row_limit = 1;

    for (int i = 0; i < 5; i++)
    {
        int p = 0;
        index = res_index;

        while (p < blank_count && i != 4)
        {
            std::cout << " ";
            p++;
        }

        for (int j = 0; j < row_limit; j++)
        {
            std::cout << input[index];
            index++;
        }

        blank_count--;
        std::cout << std::endl;
        res_index--;
        row_limit = row_limit + 2;
    }
    return (0);
}