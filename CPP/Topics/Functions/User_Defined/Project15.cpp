//**C program to swap elements of two integer arrays using user define function.

#include <iostream>

void swap(int *p1, int *p2, int count)
{
    for (int i = 0; i < count; i++)
    {
        int temp = *(p1 + i);
        *(p1 + i) = *(p2 + i);
        *(p2 + i) = temp;
    }
}

int main()
{
    int count;

    std::cout << "ENTER INPUT LIMIT: " << std::endl;
    std::cin >> count;

    int num1[count], num2[count];

    std::cout << "ENTER FIRST ARRAY ELEMENTS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num1[i];
    }

    std::cout << "ENTER SECOND ARRAY ELEMENTS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num2[i];
    }

    swap(num1, num2, count);

    std::cout << "FIRST ARRAY: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << num1[i];
    }

    std::cout << std::endl
              << "SECOND ARRAY: " << std::endl;
              
    for (int i = 0; i < count; i++)
    {
        std::cout << num2[i];
    }
}