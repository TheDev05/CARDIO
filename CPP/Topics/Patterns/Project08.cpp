/*C program to print following Pyramid:
    0        0
    01      01
    010    010 
    0101  0101 
    0101001010
*/

#include <iostream>

int main()
{
    char input[11] = "0101001010";

    int beforeBlank_index = 0;
    int inc_blank = 8, count_charArray = sizeof(input) / sizeof(char);

    for (int i = 0; i < 5; i++)
    {
        int key = 0;
        int q = 0;

        for (int j = 0; j < count_charArray; j++)
        {

            if (key == 0)//printing brfore blanks (forward array)
            {
                std::cout << input[j];
            }

            if (key == 1)//printing after blanks (reverse array)
            {

                std::cout << input[count_charArray - 1 - q];
                q++;
            }

            if (j == beforeBlank_index && i != 4)//printing blanks
            {
                key = 1;//for getting blanks are printed or not

                for (int k = 1; k <= inc_blank; k++)
                {
                    std::cout << " ";
                }

                j = j + inc_blank;// index j is incremented with printed blanks
                inc_blank = inc_blank - 2;//bkanks are decreaed by 2

                beforeBlank_index = beforeBlank_index + 1;//before blanks characters are incremented by 1
            }
        }
        std::cout << std::endl;
    }
    return (0);
}