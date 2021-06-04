//* C program to find Smallest and Largest elements from One Dimensional Array Elements.

#include <iostream>
int main()
{
    int count;
    std::cout << "ENTER INPUT LIMIT: " << std::endl;
    std::cin >> count;

    int max, min;
    int num[count];

    std::cout << "ENTER ARRAY ELEMENTS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    max = num[0];

    for (int i = 0; i < count; i++)
    {
        if (max < num[i])
        {
            max = num[i];
        }
    }

    min = num[0];
    for (int i = 0; i < count; i++)
    {
        if (min > num[i])
        {
            min = num[i];
        }
    }

    std::cout << "MAX: " << max << std::endl
              << "MIN: " << min;
    return (0);
}