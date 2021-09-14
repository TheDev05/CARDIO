//**C++ Program Sum Of Even-Positive, Even-Negative, Odd-Positive, Odd-Negative Of An Array

#include <iostream>

int main()
{
    int num[20], count;

    std::cout << "ENTER INPUT LIMIT: " << std::endl;
    std::cin >> count;

    std::cout << "ENTER YOUR NUMBERS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    int suevp = 0, suevn = 0, suodp = 0, suodn = 0;

    for (int i = 0; i < count; i++)
    {
        if (num[i] % 2 == 0)
        {
            if (num[i] > 0)
            {
                suevp += num[i];
            }

            else
            {
                num[i] = -num[i];
                suevn += num[i];
            }
        }

        else
        {
            if (num[i] > 0)
            {
                suodp += num[i];
            }

            else
            {
                num[i] = -num[i];
                suodn += num[i];
            }
        }
    }

    std::cout << "EVEN POSITIVE: " << suevp << std::endl
              << "EVEN NEGETIVE: " << suevn << std::endl
              << "ODD POSITIVE: " << suodp << std::endl
              << "ODD NEGETIVE: " << suodn << std::endl;

    return (0);
}