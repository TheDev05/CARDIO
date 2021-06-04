//**C program to print fibonacci series using recursion.

// #include <iostream>

// void fibb(int num, int a, int b)
// {
//     if (num > 0)
//     {
//         int next = a + b;
//         std::cout << next << " ";
//         a = b;
//         b = next;

//         fibb(num - 1, a, b); //Num value get dec with each call(or each value printed).
//     }
// }

// int main()
// {
//     int lim;
//     int a = 0, b = 1;

//     std::cout << "ENTER YOUR LIMIT: " << std::endl;
//     std::cin >> lim;

//     std::cout << "FIBB SERIES:" << std::endl
//               << a << " " << b << " ";
//     fibb(lim - 2, a, b);

//     return (0);
// }

//*****************************************************************************************************************************************

#include <iostream>

void fibb(int, int, int);

int main()
{
    int lim;

    std::cout << "ENTER OUTPUT LIMIT: " << std::endl;
    std::cin >> lim;

    int a = 0, b = 1;

    std::cout << "FIBB SERIES: " << std::endl
              << a << " " << b << " ";
    fibb(lim - 2, a, b);

    return (0);
}

void fibb(int lim, int a, int b)
{
    if (lim > 0)
    {
        int next = a + b;
        std::cout << next << " ";
        a = b;
        b = next;

        fibb(lim - 1, a, b);
    }
}