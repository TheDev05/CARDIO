/* There will be two arrays of integers. Determine all integers that satisfy the following two conditions:
The elements of the first array are all factors of the integer being considered
The integer being considered is a factor of all elements of the second array
These numbers are referred to as being between the two arrays. Determine how many such numbers exist.

Check some examples at:
https://www.hackerrank.com/challenges/between-two-sets/problem?h_r=next-challenge&h_v=legacy
*/

#include <iostream>

int main()
{
    int count1, count2;
    int num1[20], num2[20];

    std::cout << "ENTER FIRST ARRAY INPUT LIMIT THEN FOR SECOND ARRAY: " << std::endl;
    std::cin >> count1 >> count2;

    std::cout << "ENTER FIRST ARRAY ELEMENTS: " << std::endl;
    for (int i = 0; i < count1; i++)
    {
        std::cin >> num1[i];
    }

    std::cout << "ENTER SECOND ARRAY ELEMENTS: " << std::endl;
    for (int i = 0; i < count2; i++)
    {
        std::cin >> num2[i];
    }

    int occurence_firstarray = 0, occurence_secondarray = 0, totalvalid_occurence = 0;

    for (int i = num1[count1 - 1]; i <= num2[0]; i++)//* cannt use i<num2[1]..got error for input: 1 1 1 100
    {
        occurence_firstarray = 0;
        occurence_secondarray = 0;

        for (int j = 0; j < count1; j++)
        {
            if (i % num1[j] == 0)
            {
                occurence_firstarray++;
            }
        }

        if (occurence_firstarray == count1)
        {
            for (int p = 0; p < count2; p++)
            {
                if (num2[p] % i == 0)
                {
                    occurence_secondarray++;
                }
            }
        }

        if (occurence_secondarray == count2)
        {
            totalvalid_occurence++;
        }
    }

    std::cout << "VALUE: " << totalvalid_occurence;
    return (0);
}
