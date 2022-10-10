//**C program to create array with reverse elements of one dimensional array.

#include <iostream>

void reverse(int *p1, int *p2, int count)
{
    for (int i = 0; i < count; i++)
    {
        *(p2 + i) = *(p1 + count - 1 - i);
    }
    return;
}

int main()
{
    int count;
    std::cout << "ENTER INPUT LIMIT: " << std::endl;
    std::cin >> count;

    int num[count], rev[count];

    std::cout << "ENTER ARRAY ELEMENTS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    reverse(num, rev, count);

    std::cout << "AFTER REVERSING AND STORING: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << rev[i] << " ";
    }

    return (0);
}