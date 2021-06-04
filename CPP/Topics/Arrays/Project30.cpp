//*C program to sort array elements in ascending order.

#include <iostream>

// void swap(int *p1, int *p2)
// {
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
// }

// void bubble_sort(int *p, int count)
// {

//     for (int i = 0; i < count - 1; i++)
//     {
//         int key = 0;

//         for (int j = 0; j < count - 1 - i; j++)
//         {
//             if (*(p + j) > *(p + j + 1))
//             {
//                 key = 1;
//                 swap((p + j), (p + j + 1));
//             }
//         }

//         if (key == 0)
//         {
//             return;
//         }
//     }
// }

// int *check_min(int *p, int count, int index, int temp)
// {

//     int *address = (p + index);

//     for (int i = index; i < count; i++)
//     {
//         if (temp > *(p + i))
//         {
//             temp = *(p + i);
//             address = (p + i);
//         }
//     }
//     return (address);
// }

// void sel_sort(int *p, int count)
// {
//     for (int i = 0; i < count - 1; i++)
//     {
//         swap((p + i), check_min(p, count, i, *(p + i)));
//     }
// }

void insertion_sort(int *p, int count)
{
    for (int i = 1; i < count; i++)
    {
        int temp = *(p + i);
        int j = i - 1;

        while (j >= 0 && temp < *(p + j))
        {
            *(p + j + 1) = *(p + j);
            j--;
        }
        *(p + j + 1) = temp;
    }
}

int main()
{
    int count;
    std::cout << "ENTER INPUT LIIT: " << std::endl;
    std::cin >> count;

    int num[count];
    std::cout << "ENTER ARRAY ELEMSTS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    // bubble_sort(num, count);
    insertion_sort(num, count);
    // sel_sort(num, count);

    std::cout << "AFTER SORTING ARRAY BE LIKE: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << num[i] << " ";
    }

    return (0);
}