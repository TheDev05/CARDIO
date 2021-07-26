/* TWO DATA TYPES */

#include <iostream>

template <class type1, class type2>
type2 sum(type1 a, type2 b)
{
    return (a + b);
}

int main()
{
    int a = 2;
    float b = 2.2;

    std::cout << sum(a, b) << '\n';
}