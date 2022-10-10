//* Template Function */

#include <iostream>

template <class type>
type sum(type, type);

int main()
{
    int a = 3;
    int b = 4;

    std::cout << sum(a, b) << '\n';

    float c = 1.2;
    float d = 2.2;

    std::cout << sum(c, d) << '\n';
}

template <class type>
type sum(type x, type y)
{
    return (x + y);
}
