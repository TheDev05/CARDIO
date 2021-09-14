//**C++ Program To Find The GCD And LCM Of Two Numbers

#include <iostream>
int gcd(int, int);
int lcm(int, int);

int main()
{
    int num1, num2;

    std::cout << "ENTER 2 NUMBERS: " << std::endl;
    std::cin >> num1 >> num2;

    std::cout << "GCD OF " << num1 << " " << num2 << " IS " << gcd(num1, num2) << std::endl;

    // std::cout << "LCM OF " << num1 << num2 << " IS " << lcm(num1, num2) << std::endl;

    return (0);
}

int gcd(int a, int b)
{
    int temp, gcd;
    (b > a) ? temp = a, a = b, b = temp : 1;

    for (int i = 1; i < a; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    return (gcd);
}

// int lcm(int a, int b)
//    int i, product;
//     for (i = 0; b >= 1; i++)
//     {
//  {
//         if (a / b == 0)
//         {
//             b = a / b;
//             product *= a;
//             a = i;
//         }
//     }
//     return (product);
// }