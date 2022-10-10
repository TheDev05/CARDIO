//**C Implementation for Cyclically Permute the Elements of an Array

#include <iostream>

int *permutate(int *p, int count)
{
    static int res[20];
    int temp = *(p + 0);

    for (int i = 0; i < count; i++)
    {
        res[i] = *(p + i + 1);
    }
    res[count - 1] = temp;

    return (res);
}

int main()
{
    int count;

    std::cout << "ENTER INPUT COUNT: " << std::endl;
    std::cin >> count;

    int num[count];
    int *p;

    std::cout << "ENTER ARRAY ELEMSTS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    p = permutate(num, count);

    std::cout << "ARRAY AFTER PERMUTATAING: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << *(p + i) << " ";
    }

    return (0);
}