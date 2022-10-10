//**C++ Program To Print Address Of Pointer Of An Array Using Pointer

// #include <iostream>

// void address(int *p, int count)
// {
//     for (int i = 0; i < count; i++)
//     {
//         std::cout << (p + i) << std::endl;
//     }
// }

// int main()
// {
//     int num[20], count;

//     std::cout << "ENTER INPUT LIMIT: " << std::endl;
//     std::cin >> count;

//     address(num, count);
//     return (0);
// }

// ********************************************************************************************************************************************
// *RIVISON

#include <iostream>

void read(int *p, int count)
{
    for (int i = 0; i < count; i++)
    {
        std::cin >> *(p + i);
    }
}

void find_add(int *p, int count)
{
    for (int i = 0; i < count; i++)
    {
        std::cout << "ADRRESS OF " << i + 1 << " ELEMENT: " << (p + i) << std::endl;
    }
}

int main()
{
    int count;
    std::cout << "ENTER INPUT LIMIT: " << std::endl;
    std::cin >> count;

    int num[count];
    std::cout << "ENTER ARRAY ELEMTS: " << std::endl;
    read(num, count);

    find_add(num, count);
    return (0);
}