//**C Program to count digits in a numbers.

#include <iostream>
#include <cmath>

// int count(int num)
// {
//     int i;
//     for (i = 0; num != 0; i++)
//     {
//         num = num / 10;
//     }

//     return (i);
// }

int count(int num)
{
    int i;

    i = floor(log10(num) + 1);
    
    return (i);
}

int main()
{
    int num;

    std::cout << "ENTER YOUR NUMBER: " << std::endl;
    std::cin >> num;

    std::cout << 2 / 10 << std::endl;

    std::cout << "TOTAL DIGITS IN " << num << " IS: " << count(num);

    return (0);
}