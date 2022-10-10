//**C++ Program To Find The HCF Or LCM Of Two Number Using If/Else Statements

#include <iostream>

int main()
{
    int num1, num2;

    std::cout << "ENTER 2 NUMBERS: " << std::endl;
    std::cin >> num1 >> num2;

    int hcf;

    for (int i = 1; i < 10; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }

    int max = (num1 > num2) ? num1 : num2;
    int lcm;
    
    while (1)//? this is if else method we can also use formulla: lcm=(num1*num2)/gcd
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            lcm = max;
            break;
        }
        max++;
    }

    std::cout << "LCM: " << lcm << std::endl
              << "HCF: " << hcf << std::endl;
    return (0);
}