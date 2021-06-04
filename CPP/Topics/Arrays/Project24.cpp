//**C program to create a new array from a given array with the elements divisible by a specific number.

#include <iostream>
int main()
{
    int count;

    std::cout << "ENTER INPUT LIMIT: " << std::endl;
    std::cin >> count;

    int num[count], res[count];

    std::cout << "ENTER ARRAY ELEMENTS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    int key;
    std::cout << "ENTERR THE NUMBER FOR DIVISBLITY; " << std::endl;
    std::cin >> key;

    for (int i = 0; i < count; i++)
    {
        if (num[i] % key == 0)
        {
            res[i] = num[i];
        }
        else
            res[i] = 0;
    }

    std::cout << "ALL DIVISIBLE ELEMENSTS ARE: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        if (res[i] != 0)
        {
            std::cout << res[i] << " ";
        }
    }
    return (0);
}