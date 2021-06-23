//**C++ Program to find Area of Rectangle using inheritance

#include <iostream>

class rectangle
{
    int l, b;

public:
    void set_sides(int x, int y)
    {
        l = x;
        b = y;
    }

    void load_val(int *p1, int *p2)
    {
        *p1 = l;
        *p2 = b;
    }
};

class area : public rectangle
{

public:
    void find_area()
    {
        int j, k;
        load_val(&j, &k);

        std::cout
            << "AREA: " << j * k << '\n';
    }
};

int main()
{
    area obj;
    obj.set_sides(2, 3);
    obj.find_area();

    return (0);
}