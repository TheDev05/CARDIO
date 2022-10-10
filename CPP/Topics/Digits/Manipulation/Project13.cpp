//** Armstrong numbers between the given interval using functions.

// #include <iostream>
// #include <cmath>

// int length(int num)
// {
//     int i;
//     for (i = 0; num != 0; i++)
//     {
//         num = num / 10;
//     }

//     return (i);
// }

// void find_armstrong(int num1, int num2)
// {
//     std::cout << "ARMSTRONG NUMBERS: ";
//     for (int i = num1 + 1; i < num2; i++)
//     {
//         int sum = 0, rem = 0, res_i = i, count = length(i);
//         for (int j = 0; i != 0; j++)
//         {
//             rem = i % 10;
//             sum += pow(rem, count);
//             i = i / 10;
//         }

//         i = res_i;

//         if (sum == i)
//         {
//             std::cout << i << " ";
//         }
//     }
// }

// int main()
// {
//     int num1, num2;

//     std::cout << "ENTER YOUR INTERVALS: " << std::endl;
//     std::cin >> num1 >> num2;

//     find_armstrong(num1, num2);

//     return (0);
// }

//**********************************************************************************************************************************************
//**RIVISON**

#include <iostream>
#include <cmath>

int count(int num)
{
    int length = ceil(log10(num));
    return (length);

    // int i;
    // for (i = 1; num != 0; i++)
    // {
    // }
    // return (i - 1);
}

int armstrong(int num)
{
    int length = count(num);
    int rem, res_num = num, sum = 0;

    for (int i = 0; num != 0; i++)
    {
        rem = num % 10;
        sum += pow(rem, length);
        num = num / 10;
    }

    if (sum == res_num)
    {
        return (1);
    }

    else
        return (0);
}

int main()
{
    int num;

    std::cout << "ENTER YOUR NUMBER: " << std::endl;
    std::cin >> num;

    if (armstrong(num))
    {
        std::cout << num << " IS ARMSTRONG NUMBER";
    }

    else
        std::cout << num << " IS NOT ARMSTRONG NUMBER";

    return (0);
}