//**C program to find two largest elements in a one dimensional array.
//TODO: RIVIION NEEDED..VISIT PROJECT27

// INPUT USE: 12345,54321,11234,123455

#include <iostream>

void insertion_sort(int *p, int count)
{
    for (int i = 1; i < count; i++)
    {
        int temp = *(p + i);
        int j = i - 1;

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
    int count;
    std::cout << "ENTER INPUT LIMIT: " << std::endl;
    std::cin >> count;

    int num[count];
    std::cout << "ENTER ARRAY ELEMST: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    insertion_sort(num, count);

    int second_max, first_max;
    first_max = second_max = num[0]; //* IMPORTANT..NUM[count-1] IN FINDING MINIMUM.

    for (int i = 0; i < count; i++)
    {
        if (first_max < num[i])
        {
            first_max = num[i];
        }
    }

    for (int i = 0; i < count; i++)
    {
        if (second_max < num[i] && num[i] != first_max)
        {
            second_max = num[i];
        }
    }

    std::cout << "FIRST MAXIMIM: " << first_max << std::endl
              << "SECOND MAXIMUM: " << second_max << std::endl;
              
    return (0);
}