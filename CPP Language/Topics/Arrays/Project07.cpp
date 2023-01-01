//**C++ Program To Check Primeness Of An Array

#include <iostream>

int main()
{
    int num[20];
    int count;

    std::cout << "ENTER INPUT LIMIT: " << std::endl;
    std::cin >> count;

    std::cout << "ENTER YOUR NUMBERS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    std::cout << "PRIME NUMBERS: ";

    for (int i = 0; i < count; i++)
    {
        int key = 0;
        for (int j = 2; j < 10; j++)
        {
            if (num[i] % j == 0 && num[i] != j)
            {
                key++;
            }
        }

        if (key == 0)
        {
            std::cout << num[i]<<" ";
        }
    }

    return (0);
}