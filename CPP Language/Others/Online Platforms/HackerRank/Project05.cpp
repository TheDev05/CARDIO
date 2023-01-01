/* Given an array of integers and a positive integer k, determine the number of (x,y) pairs where x<y and x + y is divisible by .

Visit question:
https://www.hackerrank.com/challenges/divisible-sum-pairs/problem?h_r=next-challenge&h_v=zen
*/
#include <iostream>

void insertion_sort(int *p, int count)
{
    for (int i = 1; i < count; i++)
    {
        int j = i - 1;
        int temp = *(p + i);

        while (j >= 0 && temp < *(p + j))
        {
            *(p + j + 1) = *(p + j);
            j--;
        }
        *(p + j + 1) = temp;
    }
}

int main()
{

    int k, count;

    std::cout << "ENTER INTEGER THEN INPUT LIMIT: " << std::endl;
    std::cin >> k >> count;

    int num[count + 1];

    std::cout << "ENTER ARRAY ELEMENT:" << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    insertion_sort(num, count);

    int key = 0;
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if ((num[i] + num[j]) % k == 0)
            {
                key++;
            }
        }
    }

    std::cout << "TOTAL DIVISIBLE PAIRS: " << key << std::endl;
    return (0);
}