/* Given an array of integers, find and print the maximum number of integers you can select from the array such that the absolute difference between any two of the chosen integers is less than or equal to . For example, if your array is , you can create two subarrays meeting the criterion:  and . The maximum length subarray has  elements.

https://www.hackerrank.com/challenges/picking-numbers/problem */

//TODO: IMPORTANT

#include <iostream>

void ins_sort(int *p, int count)
{
    for (int i = 1; i < count; i++)
    {
        int temp = *(p + i);
        int j = i - 1;

        while (j >= 0 && *(p + j) > temp)
        {
            *(p + j + 1) = *(p + j);
            j--;
        }

        *(p + j + 1) = temp;
    }
}

int main()
{
    int count;
    std::cout << "ENTER INPUT LIMIT: " << std::endl;
    std::cin >> count;

    int num[count];
    std::cout << "ENTER YOUR ARRAY ELEMENST: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    ins_sort(num, count);//*sorting bcoz 1 or 0 only yeild with conscutive inc terms or dec terms but with dec terms vice-versa is not true
                        //*think of 4 4 3 3 5 5 5 vs 3 3 4 4 5 5 5 in non sorted..it may possible two consecutive of mid number accesending conc and desending consective yeilds 1 but fails at vice versa so do sort.

    int key = 0;
    for (int i = 0; i < count; i++)
    {
        int flag = 1;//* we are goin' to pick one i already so count that one i too.
        for (int j = i + 1; j < count; j++)
        {
            int diff = (num[i] - num[j]);
            (diff < 0) ? diff = -diff : diff = diff;

            if (diff <= 1)
            {

                flag++;//counting of elem
            }
        }
        if (flag >= key)//upade max count value or max elem in set
        {
            key = flag;
        }
    }

    std::cout << key;
    return (0);
}