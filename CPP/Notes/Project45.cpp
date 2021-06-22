//** TEMPLATES: FUNCTIONS **

#include <iostream>

template <class x, class y>
void add(x a, y b)
{
    std::cout << a + b;
}

int main()
{
    int num1, num2;
    std::cin >> num1 >> num2;

    float val1, val2;
    std::cin >> val1 >> val2;

    // add(num1, num2);
    // add(val1, val2);

    add(num1, val1);

    return (0);
}