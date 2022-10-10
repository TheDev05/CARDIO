//**C++ Program To Merge two asscending  Array In Third Array  and show output as Descending Order as well as assecding.

void bubble_sort(int *, int);
void swap(int *, int *);

#include <iostream>

int main()
{
    int num1[20], num2[20], num3[50], count1, count2, count3, j;

    std::cout << "ENTER FIRST ARRAY INPUT LIMIT: " << std::endl;
    std::cin >> count1;

    std::cout << "ENTER YOUR NUMBERS: " << std::endl;
    for (int i = 0; i < count1; i++)
    {
        std::cin >> num1[i];
    }

    std::cout << "ENTER SECOND ARRAY INPUT LIMIT: " << std::endl;
    std::cin >> count2;

    std::cout << "ENTER ARRAY ELEMENTS: " << std::endl;
    for (int i = 0; i < count2; i++)
    {
        std::cin >> num2[i];
    }

    bubble_sort(num1, count1);
    bubble_sort(num2, count2);

    std::cout << std::endl;
    std::cout << "ARRAY 01 AFTER SORTING: " << std::endl;
    for (int i = 0; i < count1; i++)
    {
        std::cout << num1[i] << " ";
    }

    std::cout << std::endl;
    std::cout << "ARRAY 02 AFTER SORTING:" << std::endl;
    for (int i = 0; i < count2; i++)
    {
        std::cout << num2[i] << " ";
    }

    count3 = count1 + count2;

    for (int i = 0; i < count1; i++)
    {
        num3[i] = num1[i];
    }

    j = count2;
    for (int i = 0; i < count2; i++)
    {
        num3[j] = num2[i];
        j++;
    }

    bubble_sort(num3, count3);

    std::cout << std::endl;
    std::cout << "OUTPUT, ASSCENDING ORDER: " << std::endl;
    for (int i = 0; i < count3; i++)
    {
        std::cout << num3[i] << " ";
    }

    std::cout << std::endl;
    std::cout << "OUTPUT, DESECNDING ORDER: " << std::endl;
    for (int i = count3 - 1; i >= 0; i--)
    {
        std::cout << num3[i] << " ";
    }

    return (0);
}

void bubble_sort(int *p, int count)
{
    int temp;
    for (int i = 0; i < count - 1; i++)
    {
        temp = 0;
        for (int j = 0; j < count - 1 - i; j++)
        {
            if (*(p + j) > *(p + j + 1))
            {
                temp++;
                swap((p + j), (p + j + 1));
            }
        }
        if (temp == 0)
        {
            break;
        }
    }
}

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}