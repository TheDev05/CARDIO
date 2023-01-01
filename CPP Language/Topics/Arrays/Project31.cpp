//**C program to swap adjacent elements of a one dimensional array

#include <iostream>

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int count;
    std::cout << "ENTER INPUT COUNT: " << std::endl;
    std::cin >> count;

    int num[count];
    std::cout << "ENTER ARRAY ELEMENST: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    for (int i = 0; i < count; i++)
    {
        if (i % 2 == 0)
        {
            swap(&num[i], &num[i + 1]);
        }
    }

    std::cout << "FINAL ARRAY: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << num[i] << " ";
    }

    return (0);
}