//**DECIMAL TO BINARY NUMBER** AND
//**BINARY TO DECIMAL**

#include <iostream>

int main()
{
    int num;

    std::cout << "ENTER YOUR NUMBERS: " << std::endl;
    std::cin >> num;

    int sum = 0, i = 1;
    int rem;

    for (int j = 0; num != 0; j++)
    {
        rem = num % 2;
        num = num / 2;

        sum = (sum * 1) + (rem * i); //? WE CAN ALSO STORE BINARY VALUES IN AN ARRAY AND THEN REVERSLY PRINT IT
        i = i * 10;
    }

    std::cout << "BINARY: " << sum << std::endl;
    return (0);
}

//**BINARY TO DECIMAL**

#include <iostream>
#include <cmath>

int len(int num)
{
    int i;
    for (i = 0; i >= 0; i++)
    {
        num = num / 10;
    }

    return (i);
}

int main()
{
    int num;

    std::cout << "ENTER BINARY NUMBER: " << std::endl;
    std::cin >> num;

    int count = len(num);

    int key = 1, sum = 0;

    for (int i = 0; i < count; i++)
    {
        int rem = num % 10;

        sum += rem * pow(2, i);

        num = num / 10;
    }

    std::cout << "DECIMAL NUMBER: " << sum;
    return (0);
}