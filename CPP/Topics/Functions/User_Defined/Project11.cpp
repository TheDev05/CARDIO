//**C program to pass function as an argument to a function.

#include <iostream>

int find_sum(int count)
{
    int a = 1, b = 0;
    int sum = 0;

    for (int i = 0; i < count; i++)
    {
        sum += b;

        int next = a + b;
        a = b;
        b = next;
    }

    return (count, sum);
}

void show_sum(int sum)
{
    std::cout << "SUM OF FIBB NUMBERS IS: " << sum;
    return;
}

int main()
{
    int count;
    std::cout << "ENTER OUTPUT LIMIT OF FIBBONACCI SERIES:" << std::endl;
    std::cin >> count;

    show_sum(find_sum(count));

    return (0);
}