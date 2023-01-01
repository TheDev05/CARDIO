//** C++ Program to find area and volume using multiple inheritance

#include <iostream>

class area
{
public:
    void get_area(int x, int y)
    {
        std::cout << "AREA: " << x * y << '\n';
    }
};

class volume
{
public:
    void get_vol(int x, int y, int z)
    {
        std::cout << "VOLUME: " << x * y * z << '\n';
    }
};

class rectangle : public volume, public area
{
    int l, b, h;

public:
    void read_sides(int x, int y, int z)
    {
        l = x;
        b = y;
        h = z;
    }

    void results()
    {
        get_area(l, b);
        get_vol(l, b, h);
    }
};

int main()
{
    rectangle pop;
    pop.read_sides(1, 2, 3);

    // pop.get_area(1, 2);
    // pop.get_vol(1, 2, 3);

    pop.results();

    return (0);
}