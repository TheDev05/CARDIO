/*C program to print following Pyramid:
    1        1
    12      21
    123    321
    1234  4321
    1234554321
*/

#include <iostream>
int main()
{
    char input[] = "1234554321";
    int dec_blank_count = 8, beforeBlank_chars = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {

            std::cout << input[j];

            if (j == beforeBlank_chars && i != 4)
            {
                for (int k = 0; k < dec_blank_count; k++)//printing blanks
                {
                    std::cout << " ";
                }

                j = j + dec_blank_count;//j is incremente with no of blank printed
                dec_blank_count = dec_blank_count - 2;// each turn we decrement blank count by 2

                beforeBlank_chars++;//incrementing before blank chares by 1
            }
        }
        std::cout << std::endl;
    }
    return (0);
}