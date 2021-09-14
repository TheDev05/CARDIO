/*
C program to print following pyramid
1A2B3C4D5E
1A2B3C4D
1A2B3C
1A2B
1A
*/

#include <iostream>

int main()
{
    char input[] = "1A2B3C4D5E";
    int output_count = 10;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < output_count; j++)
        {
            std::cout << input[j];
        }
        std::cout << std::endl;
        output_count = output_count - 2;
    }

    return (0);
}