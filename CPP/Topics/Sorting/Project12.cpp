//**C++ Program To Sort An Array Using BUBBLE SORT TECHNIQUE

// #include <iostream>
// void swap(int *, int *);
// void Bubble_sort(int *, int);

// int main()
// {
//     int num[20], count;

//     std::cout << "ENTER INPUT LIMIT: " << std::endl;
//     std::cin >> count;

//     std::cout << "ENTER YOUR ELEMENTS: " << std::endl;
//     for (int i = 0; i < count; i++)
//     {
//         std::cin >> num[i];
//     }

//     Bubble_sort(num, count);

//     std::cout << "OUTPUT: " << std::endl;
//     for (int i = 0; i < count; i++)
//     {
//         std::cout << num[i] << " ";
//     }

//     return (0);
// }

// void Bubble_sort(int *p, int count)
// {
//     int key;

//     for (int i = 0; i < count - 1; i++)
//     {
//         key = 0;
//         for (int j = 0; j < count - 1 - i; j++)
//         {
//             if (*(p + j) > *(p + j + 1))
//             {
//                 key++;
//                 swap((p + j), (p + j + 1));
//             }
//         }

//         if (key == 0)
//         {
//             break;
//         }
//     }
// }

// void swap(int *p1, int *p2)
// {
//     int temp;
//     temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
// }

//********************************************************************************************************************************************

#include <iostream>

void swap(int *, int *);
void bubble_sort(int *, int);

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

    bubble_sort(num, count);

    std::cout << "SORTED ARRAY IS AS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << num[i]<<" ";
    }

    return (0);
}

void bubble_sort(int *p, int count)
{
    int key = 0;
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - 1 - i; j++)
        {
            if (*(p + j) > *(p + j + 1))
            {
                key++;
                swap((p + j), (p + j + 1));
            }
        }
        if (key == 0)
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