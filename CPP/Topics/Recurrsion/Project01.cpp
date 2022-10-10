//**C program to find factorial using recursion.

// #include <iostream>

// int recursion(int num)
// {

//     if (num == 1)
//         return (1);

//     else
//     {
//         return (num * recursion(num - 1));
//     }
// }

// int main()
// {
//     int num;

//     std::cout << "ENTER YOUR NUMBER: " << std::endl;
//     std::cin >> num;

//     int fact = recursion(num);

//     std::cout << "FACTORIAL VALUE: " << fact;

//     return (0);
// }

//*********************************************************************************************************************************************
#include <iostream>

int fact(int num)
{
    if (num == 1)
    {
        return (1);
    }

    else
        return (num * fact(num - 1));
}

int main()
{
    int num;
    std::cout << "ENTER YOUR NUMBER: " << std::endl;
    std::cin >> num;

    std::cout << "FACTORIAL OF " << num << " IS: " << fact(num);
    return (0);
}