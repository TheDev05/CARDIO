//**C++ Program To Find GCD (Greatest Common Divisor ) Using Functions

// #include <iostream>
// int gcd(int, int);

// int main()
// {
//     int num1, num2;

//     std::cout << "ENTER 2 NUMBER:" << std::endl;
//     std::cin >> num1 >> num2;

//     std::cout << "GCD OF " << num1 << " " << num2 << " IS " << gcd(num1, num2) << std::endl;

//     return (0);
// }

// int gcd(int num1, int num2)
// {
//     int gc;
//     for (int i = 1; i < 10; i++)
//     {
//         if (num1 % i == 0 && num2 % i == 0)
//         {
//             gc = i;
//         }
//     }

//     return (gc);
// }

//**EUCLIDEAIN ALGORITHM DOR GCD (USING RECURSSION)

#include <iostream>

int gcd(int num1, int num2)
{
    if (num1 == 0)
    {
        return (num2);
    }
    return (gcd(num2 % num1, num1));
}

int main()
{
    int num1, num2;

    std::cout << "ENTER 2 NUMBERS:" << std::endl;
    std::cin >> num1 >> num2;

    int temp;
    (num2 > num1) ? (temp = 0) : (temp = num1, num1 = num2, num2 = temp);

    std::cout << "GCD OF " << num1 << " " << num2 << " IS: " << gcd(num1, num2) << std::endl;

    return (0);
}

//*************************************************************************************************************************************************
//**RIVISON

#include <iostream>

int gcd(int num1, int num2)
{
    if (num1 == 0)
    {
        return (num2);
    }

    return (gcd(num2 % num1, num1));
}

int main()
{
    int num1, num2;

    std::cout << "ENTER 2 NUMBES; " << std::endl;
    std::cin >> num1>> num2;

    std::cout << "GCD: " << gcd(num1, num2) << std::endl;
    return (0);
}