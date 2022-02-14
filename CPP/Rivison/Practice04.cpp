// static member variable

#include <iostream>

class data
{
    int dot1, dot2;
    static int point;

public:
    void set_data(int x, int y)
    {
        dot1 = x;
        dot2 = y;
    }

    void add_data()
    {
        std::cout << "sum is: " << dot1 + dot2 << '\n';
    }

    void show_static()
    {
        std::cout << "value of static: " << point << '\n';
    }
};

int data::point;

int main()
{
    data obj1, obj2;

    obj1.set_data(2, 3);
    obj2.set_data(1, 3);

    obj1.add_data();
    obj2.add_data();

    obj1.show_static();
    obj2.show_static();

    return (0);
}