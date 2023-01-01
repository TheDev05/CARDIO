//**C program to find sum of the array elements (pass an integer array to a function and return the sum).

#include <iostream>

int find_sum(int *p, int count)
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
    std::cout << "ENTER IMPUT LIMIT: " << std::endl;
    std::cin >> count;

    int num[count];
    std::cout << "ENTER YOUR ELEMENTS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    int sum = find_sum(num, count);
    std::cout << "SUM OF ELEMENTS: " << sum << std::endl;

    return (0);
}