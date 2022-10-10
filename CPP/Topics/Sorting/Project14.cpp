//**SORTING ELEMENTS OF ARRAY USING INSERTION SORTING**

#include <iostream>

void insertion_sort(int *, int);

int main()
{
    int num[20], count;

    std::cout << "ENTER INPUT LIMIT: " << std::endl;
    std::cin >> count;

    std::cout << "ENTER YOUR NUMBERS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    insertion_sort(num, count);

    std::cout << "AFTER SORTING ARRAY WILLBE: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << num[i] << " ";
    }

    return (0);
}

void insertion_sort(int *p, int count)
{
    for (int i = 1; i < count; i++)
    {
        int j = i - 1;
        int temp = *(p + i);

        while (j >= 0 && *(p + j) > temp)
        {
            *(p + j + 1) = *(p + j);
            j--;
        }

        *(p + j + 1) = temp;
    }
}