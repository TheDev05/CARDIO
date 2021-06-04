//**Program to create, initialize, assign and access a pointer variable.

#include <iostream>

int find_max(int *p1, int *p2)
{
    if (*p1 > *p2)
    {
        return (*p1);
    }
    else
    {
        if (*p2 > *p1)
        {
            return (*p2);
        }
    }
}

int main()
{
    int a, b;

    std::cout << "ENTER 2 VALUES: " << std::endl;
    std::cin >> a >> b;

    int *p1, *p2;
    p1 = &a;
    p2 = &b;

    int max = find_max(p1, p2);

    std::cout << "MAXIMIM IS: " << max;
    return (0);
}