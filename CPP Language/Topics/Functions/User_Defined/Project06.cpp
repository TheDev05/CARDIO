//*C program to check given number is divisible by A and B.

#include <iostream>

void check_div(int num, int div1, int div2)
{
    if (num % div1 == 0 && num % div2 == 0)
    {
        std::cout << num << " IS DIVISBLE BY BOTH TWO NUMBERS";
        return;
    }

    if (num % div1 == 0)
    {
        std::cout << num << " IS ONLY DIVISIBLE BY " << div1;
        return;
    }

    if (num % div2 == 0)
    {
        std::cout << num << " IS DIVISIBLE BY ONLY " << div2;
        return;
    }
}

int main()
{
    int num;

    std::cout << "ENTER YOUR NUMBER: " << std::endl;
    std::cin >> num;

    int div1, div2;
    std::cout << "ENTER TWO NUMBERS FOR CHECKING " << num << " IS DIVISIBLE OR NOT:" << std::endl;
    std::cin >> div1 >> div2;

    check_div(num, div1, div2);

    return (0);
}