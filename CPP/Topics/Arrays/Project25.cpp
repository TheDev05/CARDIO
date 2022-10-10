//**C program to find second largest elements in a one dimensional array.
//TODO: RIVIION NEEDED..VISIT PROJECT27

// INPUT USE: 12345,54321,11234,123455

//? SORTING METHOD

// #include <iostream>

// void insertion_sort(int *p, int count)
// {
//     for (int i = 1; i < count; i++)
//     {
//         int temp = *(p + i);
//         int j = i - 1;

//         while (j >= 0 && temp < *(p + j))
//         {
//             *(p + j + 1) = *(p + j);
//             j--;
//         }
//         *(p + j + 1) = temp;
//     }
// }

// int main()
// {
//     int count;
//     std::cout << "ENTER INPUT LIMIT: " << std::endl;
//     std::cin >> count;

//     int num[count];
//     std::cout << "ENTER ARRAY ELEMENTS: " << std::endl;
//     for (int i = 0; i < count; i++)
//     {
//         std::cin >> num[i];
//     }

//     insertion_sort(num, count);

//     int flag = num[0];
//     for (int i = 0; i < count; i++)
//     {
//         if (flag < num[i])
//         {
//             flag = num[i];
//         }
//     }

//     int temp = num[0];
//     for (int i = 0; i < count; i++)
//     {
//         if (temp < num[i] && num[i] != flag)
//         {
//             temp = num[i];
//         }
//     }

//     std::cout << "SECOND LARGEST ELEMENT IS: " << temp;
//     return (0);
// }

//?FUNCTION OVERLOADING (DEFAULT FUNCTION)

// #include <iostream>

// int min_max(int *p, int key, int count, int max = 0, int min = 0)
// {

//     int temp;

//     for (int i = 0; i < count; i++)
//     {
//         if (min < *(p + i) && *(p + i) != max && key == 0)
//         {
//             min = *(p + i);
//             temp = min;
//         }

//         if (*(p + i) < max && *(p + i) > min && key == 1)
//         {
//             max = *(p + i);
//             temp = max;
//         }
//     }

//     return (temp);
// }

// int main()
// {
//     int count;
//     std::cout << "ENTER INPUT LIMIT: " << std::endl;
//     std::cin >> count;

//     int num[count];
//     std::cout << "ENTER ARRAY ELEMSTS: " << std::endl;
//     for (int i = 0; i < count; i++)
//     {
//         std::cin >> num[i];
//     }

//     int max1 = min_max(num, 0, count);
//     int max2 = min_max(num, 0, count, max1);

//     int min1 = min_max(num, 1, count, max1);
//     int min2 = min_max(num, 1, count, max1, min1);

//     std::cout << "FIRST MINUM: " << min1 << std::endl
//               << "SECOND MIN: " << min2 << std::endl;

//     std::cout << "FIRST MAX: " << max1 << std::endl
//               << "SECOND MAX: " << max2<<std::endl;

//     return (0);
// }

//? SINGLE LOOP (BEST)

#include <iostream>
#include <climits>

int main()
{
    int count;
    std::cout << "ENTER INPUT LIMIT: " << std::endl;
    std::cin >> count;

    int num[count];
    std::cout << "ENTER ARRAY EKEMSNTS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    int min1 = num[0];
    // int min2=find_max(num,count); //? for finding second minum we always need maximum.
    int min2=INT_MAX;

    for (int i = 0; i < count; i++)
    {
        if (min1 > num[i])
        {
            min2 = min1;
            min1 = num[i];
        }

        else
        {
            if (num[i] < min2 && num[i] > min1)
            {
                min2 = num[i];
            }
        }
    }

    std::cout << "MAX01: " << min1 << std::endl
              << "MIN01: " << min2;
    return (0);
}