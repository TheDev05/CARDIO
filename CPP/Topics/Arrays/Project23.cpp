//**C program to count total number of elements divisible by a specific number in an array.

#include <iostream>

int main()
{
    int count;

    std::cout << "ENTER INPUT LIMIT: " << std::endl;
    std::cin >> count;

    int num[count];

    std::cout << "ENTER ARRAY ELEMENTS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    int key;
    std::cout << "ENTER THE NUMBER FOR DIVISON: " << std::endl;
    std::cin >> key;

    int occurence = 0;
    for (int i = 0; i < count; i++)
    {
        if (num[i] % key == 0)
        {
            occurence++;
        }
    }

    std::cout << "TOTAL NUMBERS ARE: " << occurence;
    return (0);
}