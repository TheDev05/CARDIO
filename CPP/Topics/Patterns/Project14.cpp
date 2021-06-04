/*
C program to print following character pyramid:
ABCDEDCBA
ABCD DCBA
ABC   CBA
AB     BA
A       A
*/

#include <iostream>

int main()
{
    char input[] = "ABCDEDCBA";
    int after_blank = 4;
    int blank_count = 1;

    for (int i = 0; i < 5; i++)
    {
        int p = 0;
        for (int j = 0; j < 9; j++)
        {

            if (j == after_blank && i != 0)
            {
                while (p < blank_count)
                {
                    std::cout << " ";
                    p++;
                }
                
                j = j + blank_count;
                blank_count = blank_count + 2;
                after_blank--;
            }

            std::cout << input[j];
        }
        std::cout << std::endl;
    }

    return (0);
}