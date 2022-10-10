//**C/C++ Program for Find the Number Occurring Odd Number of Times

#include <iostream>

int main()
{
    int num[20], res[20];
    int count, repeat;

    std::cout << "ENTER YOUR INPUT LIMIT: " << std::endl;
    std::cin >> count;

    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
        res[i] = -2;
    }

    for (int i = 0; i < count - 1; i++)
    {
        int key = 1;
        for (int j = i + 1; j < count; j++)
        {
            if (num[i] == num[j])
            {
                key++;
                repeat = j;
            }
        }

        if (i != repeat)
        {
            res[i] = key;
        }
    }

    for (int i = 0; i < count; i++)
    {
        if (res[i] != -2 && res[i] / 2 != 0)
        {
            std::cout << num[i];
        }
    }

    return (0);
}