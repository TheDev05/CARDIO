//**C++ Program To Check Positive / Negative Number Of An Array

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

    std::cout << "POSITIVES: ";
    for (int i = 0; i < count; i++)
    {
        if (num[i] > 0)
        {
            std::cout << num[i] << " ";
        }
    }

    std::cout << std::endl
              << "NEGETIVES: ";
    for (int i = 0; i < count; i++)
    {
        if (num[i] < 0)
        {
            std::cout << num[i] << " ";
        }
    }
}