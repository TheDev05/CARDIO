//**Write a program to print the area and perimeter of a triangle having
// sides of 3, 4 and 5 units by creating a class named 'Triangle' with a
// function to print the area and perimeter.

#include <iostream>

class traingle
{
private:
    int l, b, h;

public:
    traingle(int l, int b, int h)
    {
        std::cout << "THE PERIMETER OF TRAINGLE IS: " << l + b + h << std::endl;
        std::cout << "THE AREA OF TRAINGLE IS: " << 0.5 * (b * h) << std::endl;
    }
};
int main()
{
    traingle obj(2, 4, 5);
    return (0);
}