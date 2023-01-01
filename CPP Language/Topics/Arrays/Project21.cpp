//**C program to check prime numbers in an array.

#include <iostream>

int main()
{
    int count;

    std::cout << "ENTER INPUT LIMIT: " << std::endl;
    std::cin >> count;

    int num[count];

    std::cout << "ENTER YOUR VALUES: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    for (int i = 0; i < count; i++)
    {
        int key = 0;
        for (int j = 2; j < 10; j++)
        {
            if (num[i] % j == 0 && num[i] != j)
            {
                key = 1;
            }
        }
        if (key == 0)
        {
            std::cout << num[i] << " ";
        }
    }

    return (0);
}