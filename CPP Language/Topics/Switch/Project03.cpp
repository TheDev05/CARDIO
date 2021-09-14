//**C++ To Program Calculate Area Of Circle Rectangle And Triangle Using Switch Case

#include <iostream>

int main()
{
    int choose, r, l, b, lt, bt, ht;

    std::cout << "ENTER 0 FOR CIRCLE AREA" << std::endl
              << "ENTER 1 FOR RECTANGLE" << std::endl
              << "ENTER 2 FOR TRAINGLE AREA" << std::endl;
    std::cin >> choose;

    switch (choose)
    {
    case 0:
    {
        std::cout << "ENTER RADIUS OF CIRCLE: " << std::endl;
        std::cin >> r;
        std::cout << "AREA: " << 3.14 * r * r;
        break;
    }
    case 1:
    {
        std::cout << "ENTER L AND B OF RECTANGLE: " << std::endl;
        std::cin >> l >> b;
        std::cout << "AREA: " << l * b;
        break;
    }
    case 2:
    {
        std::cout << "ENTER L,B,H OF TRAINGLE: " << std::endl;
        std::cin >> lt >> bt >> ht;
        std::cout << "AREA: " << 0.5 * bt * ht;
        break;
    }

    default:
        std::cout << "INVALID INPUT" << std::endl;
        break;
    }

    return (0);
}