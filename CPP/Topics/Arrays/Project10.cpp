//**C++ Program to Check Is there Armstrong Number exists in an array, if yes show that:

#include <iostream>
#include <cmath>

int main()
{
    int num[20];
    int count;

    std::cout << "ENTER YOUR INPUT LIMIT: " << std::endl;
    std::cin >> count;

    std::cout << "ENTER NUMBERS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    int digit = 0, sum = 0, rem, res;

    for (int i = 0; i < count; i++)
    {
        digit = 0;
        sum = 0;
        rem = 0;
        if (num[i] != 0)
        {
            res = num[i];
            while (num[i] != 0)
            {
                digit++;
                num[i] = num[i] / 10;
            }
            num[i] = res;
            while (num[i] != 0)
            {
                rem = num[i] % 10;
                sum += pow(rem, digit);
                num[i] = num[i] / 10;
            }
           
            if (sum == res)
            {
                std::cout << res << " IS AMANGSTRONG" << std::endl;
            }
        }
    }

    return (0);
}