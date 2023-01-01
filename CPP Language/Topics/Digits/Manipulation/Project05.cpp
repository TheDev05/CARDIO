//**C Program to check number is Armstrong or not.

#include <iostream>
#include <cmath>

int check_armstrong(int num)
{
    int count, res_num = num;
    for (count = 1; num != 0; count++)
    {
        num = num / 10;
    }

        count = count - 1;

    num = res_num;
    int rem, sum = 0;
    for (int i = 0; num != 0; i++)
    {
        rem = num % 10;
        sum += pow(rem, count);
        num = num / 10;
    }

    num = res_num;
    if (sum == num)

        return (1);
    else
        return (0);
}

int main()
{
    int num;

    std::cout << "ENTER YOUR NUMBER: " << std::endl;
    std::cin >> num;

    if (check_armstrong(num))

        std::cout << num << " IS ARMSTRONG";
    else
        std::cout << num << " IS NOT SRMSTRONG";

    return (0);
}