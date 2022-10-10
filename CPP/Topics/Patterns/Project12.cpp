/*
C program to print following pyramid
123454321
 1234321
  12321
   121
    1
*/

#include <iostream>
int main()
{
    char input[] = "123454321";

    int inc_blank = 1;
    int num_removal_index = 3;
    int removal_count = 2;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == 0 && i != 0)//for every row blanks are starting from index 0 but not fir first index
            {
                for (int k = 1; k <= inc_blank; k++)// printing blanks
                {
                    std::cout << " ";
                }
                inc_blank++;//incrementing blank count
            }

            std::cout << input[j];

            if (j == num_removal_index && i != 0)
            {
                j = j + removal_count;//incrementing j value so that some elem get removed or not printed

                removal_count = removal_count + 2;//with each row removal count increase by 2
                num_removal_index--;// index for removing value decrease by 1 with each row
            }
        }
        std::cout << std::endl;
    }
    return (0);
}

