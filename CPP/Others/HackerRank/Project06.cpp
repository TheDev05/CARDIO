/*Given an array of bird sightings where every element represents a bird type id, determine the id of the most frequently sighted type. If more than 1 type has been spotted that maximum amount, return the smallest of their ids.

https://www.hackerrank.com/challenges/migratory-birds/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
*/

//TODO: RIVISON NEEDED..VERY IMPORTNT
//? IMP: FOR ONLY ENTRY OF 1 2 3 4 5.

// #include <iostream>
// int main()
// {
//     int count;
//     std::cout << "ENTER NUMBER OD BIRDS: " << std::endl;
//     std::cin >> count;

//     int res[6] = {'0'};
//     int num[count];

//     std::cout << "ENTER SIGHTENING OF BIRDS: " << std::endl;
//     for (int i = 0; i < count; i++)
//     {
//         std::cin >> num[i];
//         res[num[i]]++;
//     }

//     int j = 1;
//     int temp = res[1];
//     int index;
//     while (j <= 5)
//     {

//         if (temp > res[j])
//         {
//             temp = res[j];

//             index = j;
//         }
//         j++;
//     }

//     std::cout << index;

//     return (0);
// }

//*******************************************************************************************************************************************
//? : FOR ANY ENTRY : AS COUNT=7, 111, 444,32,56,32,111,56 ETC.


#include <iostream>
int main()
{
    int count;
    std::cout << "ENTER NUMBER OD BIRDS: " << std::endl;
    std::cin >> count;

    int res[count] = {'0'}; //initialize with zeroes so that no garbage value will be filled
    int num[count];

    std::cout << "ENTER SIGHTENING OF BIRDS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
        // res[num[i]]++;
    }

    for (int i = 0; i < count; i++)
    {
        int key = 1;

        for (int j = i + 1; j < count; j++)
        {
            if (num[i] == num[j])
            {
                key++;
                res[j] = -1;
            }
        }
        if (res[i] != -1)
        {
            res[i] = key; //storing occurence of birds signetings
        }
    }

    int j = 0;
    int temp = res[0];
    int lesser = num[0]; //lets assume first elem

    while (j < count)
    {

        if (temp < res[j])
        {
            temp = res[j];
            lesser = num[j];
        }
        j++;
    }

    for (int i = 0; i < count; i++)
    {
        if (temp == res[i])
        {

            if (lesser > num[i])
            {
                lesser = num[i];
            }
        }
    }

    std::cout << lesser;

    return (0);
}
