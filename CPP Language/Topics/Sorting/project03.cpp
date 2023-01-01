//**SORTING ARRAY IN DESENDING ORDER (**BUBBLE SORT**)

#include <iostream>
void Bubble_sort(int *, int);
void swap(int *, int *);

int main()
{
    int num[20], count;

    std::cout << "ENTER ARRAY INPUT LIMIT: " << std::endl;
    std::cin >> count;

    std::cout << "ENTER YOUR NUMBERS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    Bubble_sort(num, count);

    std::cout << "OUTPUT: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << num[i] << " ";
    }

    return (0);
}

void Bubble_sort(int *p, int count)
{
    int temp;
    for (int i = 0; i < count - 1; i++)
    {
        temp = 0;
        for (int j = 0; j < count - 1 - i; j++)
        {
            if (*(p + j) < *(p + j + 1))
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