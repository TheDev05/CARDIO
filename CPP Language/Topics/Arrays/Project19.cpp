//**C program to calculate median of an array.

#include <iostream>

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void bubble_sort(int *p, int count)
{
    int key = 0;
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - 1 - i; j++)
        {
            if (*(p + j) > *(p + j + 1))
            {
                key = 1;
                swap((p + j), (p + j + 1));
            }
        }
        if (key = 0)
        {
            return;
        }
    }
}

float avg(int *p, int count)
{
    float sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += *(p + i);
    }

    return (sum / 2);
}

int main()
{
    int count;

    std::cout << "ENTER INPUT LIMIT: " << std::endl;
    std::cin >> count;

    int num[count];

    std::cout << "ENTER ARRAY ELEMENTS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    bubble_sort(num, count);

    if (count % 2 == 0)
    {
        std::cout << "MEDIAN: " << avg(num, count) << std::endl;
    }

    else
        std::cout << "MEDIAN: " << num[count / 2] << std::endl;

    return (0);
}