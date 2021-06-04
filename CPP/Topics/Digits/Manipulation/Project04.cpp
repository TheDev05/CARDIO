//**C Program to check number is palindrome or not.

#include <iostream>

int check_palindrome(int num)
{

    int rem, sum = 0, res_num = num;
    for (int i = 0; num != 1; i++)
    {
        rem = num % 10;
        sum = (sum * 10) + (rem * 1);
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

    if (check_palindrome(num))

        std::cout << num << " IS PALINDROME.";
    else
        std::cout << num << " IS NOT PALINDROME.";

    return (0);
}