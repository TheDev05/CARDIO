//**C/C++ Program for Given an array A[] and a number x, check for pair in A[] with sum as x
// as. array 1 2 0 3...no given is 5....output=2,3...as 2+3=5.

#include <iostream>
int main()
{
    int num[20], count, key;

    std::cout << "ENTER YOUR INPUT LIMIT: " << std::endl;
    std::cin >> count;

    std::cout << "ENTER YOUR NUMBERS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    std::cout << "ENTER YOUR NUMBER FOR SUM CHECK: " << std::endl;
    std::cin >> key;

    for (int i = 0; i < count; i++)
    {
        for (int j = i ; j < count; j++)
        {
            if (num[i] + num[j] == key)
            {
                std::cout << num[i] << "," << num[j] << std::endl;
            }
        }
    }

    return (0);
}
