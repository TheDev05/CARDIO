//**C++ Program To Check Number Is Armstrong Or Not Using If/Else Statements

#include <iostream>
#include <cmath>

int main()
{
    int num, res_num, rem;
    int limit, sum = 0;

    std::cout << "HOW MANY DIGIT NUMBER YOU WANNA CHECK: " << std::endl;
    std::cin >> limit;

    std::cout << "ENTER YOUR " << limit << " DIGIT NUMBER: " << std::endl;
    std::cin >> num;

    res_num = num;

    while (num > 0)
    {

        rem = num % 10;
        sum += pow(rem, limit);
        // sum += rem * rem * rem;
        num = num / 10;
    }

    if (sum == res_num)
    {
        std::cout << "NUMBER IS ARMSTRONG" << std::endl;
    }

    else
        std::cout << "NUMBER IS NOT ARMSTRONG" << std::endl;

    return (0);
}