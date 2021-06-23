//**C++ Program to Overriding the member functions using Inheritance

#include <iostream>

class area
{
public:
    void get_area(int x) //area of square
    {
        std::cout << x * x << '\n';
    }
};

class rectangle : public area
{
    int l, b;

public:
    void read(int x, int y)
    {
        l = x;
        b = y;
    }

    void get_area(int p) //overidden: modified a bit for rectangle area
    {
        std::cout << l * b << '\n';
    }
};

int main()
{
    rectangle pop;
    area obj;

    obj.get_area(2);

    pop.read(2, 3);
    pop.get_area(2);

    return (0);
}