//**C++ Program To Sort An Array Using SELECTION SORT TECHNIQUE

// #include <iostream>

// void sel_sort(int *, int);
// int *check_least(int *, int, int);
// void swap(int *, int *);

// int main()
// {
//     int num[20], count;

//     std::cout << "ENTER INPUT LIMIT:" << std::endl;
//     std::cin >> count;

//     std::cout << "ENTER YOUR NUMBERS: " << std::endl;
//     for (int i = 0; i < count; i++)
//     {
//         std::cin >> num[i];
//     }

//     sel_sort(num, count);

//     std::cout << "OUTPUT: " << std::endl;
//     for (int i = 0; i < count; i++)
//     {
//         std::cout << num[i] << " ";
//     }

//     return (0);
// }

// void sel_sort(int *p, int count) //* sorting
// {
//     for (int i = 0; i < count - 1; i++)
//     {
//         swap((p + i), check_least(p, i, count));
//     }
// }

// int *check_least(int *p, int i, int count) //* check least value
// {
//     int temp = *(p + i);
//     int *index = (p + i);

//     for (i; i < count; i++) //? we cant write int i here, if we declare inside for loop its span or effect it only within that loop.
//     {
//         if (temp > *(p + i))
//         {
//             temp = *(p + i);
//             index = (p + i);
//         }
//     }

//     return (index);
// }

// void swap(int *p1, int *p2) //* swapping values
// {
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
// }

//************************************************************************************************************************************************
#include <iostream>

void sel_sort(int *, int);
void swap(int *, int *);
int* find_least(int *, int, int);

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

    sel_sort(num, count);

    std::cout << "AFTER SORTING: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << num[i] << " ";
    }

    return (0);
}

void sel_sort(int *p, int count)
{
    for (int i = 0; i < count; i++)
    {
        swap((p + i), find_least(p, count, i));
    }
}

int* find_least(int *p, int count, int i)
{
    int temp = *(p + i);
    int *index = (p + i);
    for (int j = i; j < count; j++)
    {
        if (temp > *(p + j))
        {
            temp = *(p + j);
            index = (p + j);
        }
    }

    return (index);
}

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}