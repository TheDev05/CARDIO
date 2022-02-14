/* C++ Program to find Largest among two numbers using function template */

#include <iostream>

template <class type>
type max(type *x, type *y)
{
    return (std::max(*x, *y));
}

int main()
{
    int a = 2, b = 5;
    float x = 2.2, y = 2.1;

    std::cout << max(&a, &b) << " " << max(&x, &y);
}