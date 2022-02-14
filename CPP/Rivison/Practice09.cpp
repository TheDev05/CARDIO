// assigning values to object, obj1=obj2;

#include <iostream>

class data
{
    int point;

public:
    void set_val()
    {
        std::cout << "Eneter values: " << '\n';
        std::cin >> point;
    }

    void square()
    {
        point = point * point;
    }

    void show_val()
    {
        std::cout << point << '\n';
    }
};

int main()
{
    data obj1, obj2;

    obj1.set_val();
    obj1.square();

    obj2 = obj1;
    obj2.show_val();

    return (0);
}