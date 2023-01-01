/* Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.
IMP: SUBMITTED CODE HAVE LONG LONG TYPE ARRAY & COUNT VALUE IS FIXED TO 5.

https://www.hackerrank.com/challenges/mini-max-sum/problem */

#include <iostream>


void insertion_sort(int *p, int count)
{
    for (int i = 1; i < count; i++)
    {
        int temp = *(p + i);
        int j = i - 1;

        while (*(p + j) > temp && j >= 0)
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

    // std::cout<<"ENTER INPUT LIMIT: "<<std::endl;
    std::cin >> count;

    int num[count];

    // std::cout << "ENTER YOUR NUMBERS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    insertion_sort(num, count);

    int sum_max = 0, sum_min = 0;

    for (int i = 0; i < 4; i++)
    {
        sum_min += num[i];
    }

    for (int i = 0; i < 4; i++)
    {
        sum_max += num[count-1-i];
    }

    std::cout << sum_min << " " << sum_max;

    return (0);
}

