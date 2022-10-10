//**C program to find second smallest element in a one dimensional array.
//TODO: RIVIION NEEDED..VISIT PROJECT27
//? best at project25

// INPUT USE: 12345,54321,11234,123455

// #include <iostream>

// void insertion_sort(int *p, int count)
// {

//     for (int i = 1; i < count; i++)
//     {
//         int temp = *(p + i);
//         int j = i - 1;

//         while (j >= 0 && *(p + j) > temp)
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
//     std::cout << "ENTER ARRAY ELEMSTS: " << std::endl;
//     for (int i = 0; i < count; i++)
//     {
//         std::cin >> num[i];
//     }

//     insertion_sort(num, count);

//     int flag, temp;
//     flag = temp = num[count - 1]; //* IMPORTANT

//     for (int i = 0; i < count; i++)
//     {
//         if (flag > num[i])
//         {
//             flag = num[i];
//         }
//     }

//     for (int i = 0; i < count; i++)
//     {
//         if (temp > num[i] && num[i] != flag)
//         {
//             temp = num[i];
//         }
//     }

//     std::cout << "TWO LEASTS ARE: " << flag << " " << temp;
//     return (0);
// }

//** BELOW PROGRAMS ARE FOR FINDING TWO MAXIMUM. 

// #include <iostream> 

// int main()
// {
//     int count;
//     std::cout << "ENTER INPUT LIMIT: " << std::endl;
//     std::cin >> count;

//     int num[count];
//     std::cout << "ENTER ARRAY EKEMSNTS: " << std::endl;
//     for (int i = 0; i < count; i++)
//     {
//         std::cin >> num[i];
//     }

//     int max = 0, min = 0;

//     for (int i = 0; i < count; i++)
//     {
//         if (max < num[i])
//         {
//             min = max;
//             max = num[i];
//         }
//         else if (min < num[i] && max > num[i])
//         {
//             min = num[i];
//         }
//     }

//     std::cout << "MAX01: " << max << std::endl
//               << "MIN01: " << min;
//     return (0);
// }

#include <iostream>

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

    int max = 0, min = 0;

    for (int i = 0; i < count; i++)
    {
        if (max < num[i])
        {

            max = num[i];
        }
    }

    for (int i = 0; i < count; i++)
    {
        if (num[i] > min && num[i] < max)
        {
            min = num[i];
        }
    }

    std::cout << "MAX01: " << max << std::endl
              << "MIN01: " << min;
    return (0);
}

