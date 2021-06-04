#include <iostream>


void insertion_sort(int *p)
{
    for (int i = 1; i < 5; i++)
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
    

    

    int num[5];

    // std::cout << "ENTER YOUR NUMBERS: " << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cin >> num[i];
    }

    insertion_sort(num, 5);

    int sum_max = 0, sum_min = 0;

    for (int i = 0; i < 4; i++)
    {
        sum_min += num[i];
    }

    for (int i = 0; i < 4; i++)
    {
        sum_max += num[3-i];
    }

    std::cout << sum_min << " " << sum_max;

    return (0);
}