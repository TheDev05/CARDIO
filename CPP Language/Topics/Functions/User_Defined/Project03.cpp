//*C program to find Sum of all Array Elements by passing array as an argument using User Define Functions.
#include <iostream>

int elem_sum(int *p, int count)
{
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += *(p + i);
    }

    return (sum);
}

int main()
{

    int count;

    std::cout << "ENTER ARRAY LIMIT: " << std::endl;
    std::cin >> count;

    int num[count];
    std::cout << "ENTER ARRAY ELEMENTS: " << std::endl;

    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    int sum = elem_sum(num, count);

    std::cout << "SUM OF ELEMENTS IN ARRY: " << sum;
    return (0);
}