/* C++ Program to build Simple calculator using Class template */

#include <iostream>

template <class type1, class type2>
type2 calc(type1 a, type2 b, int x)
{
    switch (x)
    {
    case 1:
        return (a + b);
        break;
    case 2:
        return (a - b);
        break;
    case 3:
        return (a * b);
        break;
    case 4:
        return (a / b);
        break;
    default:
        std::cout << "Enter Valid Input\n";
        break;
    }

    return (0);
}

int main()
{
    int a;
    float b;

    std::cin >> a >> b;

    int val;
    std::cout << "Enter Your Preference: " << '\n';
    std::cout << "1: Addition\n2: Subtraction\n3: Muntiplication\n4: Divison\n";
    std::cin >> val;

    std::cout << calc(a, b, val);

    return (0);
}