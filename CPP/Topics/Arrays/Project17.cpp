//**C program to swap first element with last, second to second last and so on (reversing elements).

#include <iostream>

void swap(int *p, int count)
{
    for (int i = 0; i < count / 2; i++)
    {
        int temp = *(p + i);
        *(p + i) = *(p + (count - 1) - i);
        *(p + (count - 1) - i) = temp;
    }

    return;
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

    swap(num, count);

    std::cout << "AFTER SWAPPING ARRAY IS: " << std::endl;

    for (int i = 0; i < count; i++)
    {
        std::cout << num[i] << " ";
    }

    return (0);
}